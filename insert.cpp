#include <iostream>
#include <list>
#include <iterator>

template<typename C> class my_back_insert_iterator
{
public:
	explicit my_back_insert_iterator(C& _Cont)
		: container(_STD addressof(_Cont))
	{	// construct with container
	}

	my_back_insert_iterator& operator=(const typename C::value_type& _Val)
	{	// push value into container
		container->push_back(_Val);
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
		
	std::copy(s1.begin(), s1.end(), my_back_inserter(s2));

	for (auto e : s2)
	{
		std::cout << e << ", ";
	}
}