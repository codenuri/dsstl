#include <iostream>
#include <list>
#include <iterator>

// 모든 반복자는 반드시
// => ++ 와 * 연산을 제공해야 합니다.

// 아래 "삽입반복자"도 반복자 이므로
// => 반드시 ++, * 연산이 되어야 합니다.


template<typename T>
class my_back_insert_iterator
{
	T& c;
public:
	inline my_back_insert_iterator(T& c) : c(c) {}

	inline my_back_insert_iterator& operator*()
	{
		return *this;
	}
	inline void operator=(const typename T::value_type& value)
	{
		c.push_back(value);
	}

	my_back_insert_iterator& operator++()
	{
		return *this;
	}

	// 실제 C++ 표준과 같이 사용되려면
	// 아래와 같은 멤버 타입이 몇개 필요 합니다.
	using value_type = void;
	using difference_type = void;
	using pointer = void;
	using reference = void;
	using iterator_category = std::output_iterator_tag;
	using container_type = T;
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
