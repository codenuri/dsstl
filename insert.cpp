#include <iostream>
#include <list>
#include <iterator>

template<typename C> class my_back_insert_iterator
{
public:
	using iterator_category = std::output_iterator_tag;
	using value_type = void;
	using difference_type = void;
	using pointer = void;
	using reference = void;

	using container_type = C;

	explicit my_back_insert_iterator(C& _Cont)
		: container(_STD addressof(_Cont))
	{	// construct with container
	}

	my_back_insert_iterator& operator=(const typename C::value_type& _Val)
	{	// push value into container
		container->push_back(_Val);
		return (*this);
	}

	my_back_insert_iterator& operator=(typename C::value_type&& _Val)
	{	// push value into container
		container->push_back(_STD move(_Val));
		return (*this);
	}

	my_back_insert_iterator& operator*()
	{	// pretend to return designated value
		return (*this);
	}

	my_back_insert_iterator& operator++()
	{	// pretend to preincrement
		return (*this);
	}

	my_back_insert_iterator operator++(int)
	{	// pretend to postincrement
		return (*this);
	}

protected:
	C* container;	// pointer to container
};


// 함수 버전
template<typename T>
my_back_insert_iterator<T> my_back_inserter(T& c)
{
	return my_back_insert_iterator<T>(c);
}

int main()
{
	std::list<int> s1 = { 1, 2, 3, 4, 5 };
	std::list<int> s2 = { 1, 2, 3, 4, 5 };

	auto p = my_back_inserter(s2);

	*p = 10;
	++p;     // 아무일도 하지 않음.
	// 하지만, 반드시 지원해야 한다.
	// 그래야, std::copy 같은 곳에 보낼수 있다.
	*p = 20;

	std::copy(s1.begin(), s1.end(), p); // ??
	// => std::copy 는 내부적으로 1번째, 3번째 인자로 받은
	//    반복자를 ++ 연산으로 이동하게 됩니다.
	// => 따라서, 3번째 인자 p 는 반드시 ++연산을 제공해야합니다


	for (auto e : s2)
	{
		std::cout << e << ", ";
	}
}