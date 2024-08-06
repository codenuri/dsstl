// 2_adapter3.cpp
#include <iostream>
#include <list>
#include <algorithm>

// iterator         : ++ 연산지 => 방향으로 이동
// reverse_iterator : ++ 연산지 <= 방향으로 이동

template<typename T>
class my_reverse_iterator
{
	T iter; // main 처럼사용시, iter 는 결국 list 의 반복자
public:
	my_reverse_iterator(T it) : iter(it) { --iter; }

	my_reverse_iterator& operator++()
	{
		--iter;
		return *this;
	}
	my_reverse_iterator& operator--()
	{
		++iter;
		return *this;
	}

	typename std::iterator_traits<T>::value_type& operator*()
	{
		return *iter;
	}

	// 관례적으로 ==, != 는 항상 필요
	bool operator==(const my_reverse_iterator& other) const
	{
		return iter == other.iter;
	}

	bool operator!=(const my_reverse_iterator& other) const
	{
		return iter != other.iter;
	}


};






int main()
{
	std::list<int> s = { 1,2,3,4,5,6,7,3,9,10 };



	auto p = std::next(s.begin(), 3);

	my_reverse_iterator< std::list<int>::iterator > r(p); 

}
