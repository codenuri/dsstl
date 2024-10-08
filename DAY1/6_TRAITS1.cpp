#include <iostream>
#include <list>

// sum() 을 만들어 봅시다.

// 아래 코드에서
// T             : 반복자 타입
// T::value_type : 반복자가 가리키는 요소의 타입

template<typename T>
typename T::value_type sum(T first, T last)
{
	typename T::value_type  s = 0;

	while (first != last)
	{
		s += *first;
		++first;
	}
	return s;
}

int main()
{
	std::list<int> s = { 1,2,3,4,5,6,7,8,9,10 };

	int n = sum( s.begin(), s.end() );

	std::cout << n << std::endl; // 55
}