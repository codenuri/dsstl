#include <iostream>
#include <iterator>
#include <list>

// 대부분의 STL 알고리즘은 "컨테이너의 특정한 구간(range)"에 대해서
// 동작합니다.

// C++98 의 range
// => [first, last) 의 반복자 쌍으로 표현됩니다.
// => first, last 는 반드시 같은 타입이어야 합니다.

// C++20 의 range
// => [first, sentinel) 로 개념이 확장됩니다.
// => sentinel 은 first 와 같은 타입의 반복자 일수도 있고
// => first 와 ==, != 연산이 가능한 임의의 객체 일수도 있습니다.


// C++98 find 는 아래 처럼
// 1, 2 번째의 인자가 같은 타입으로 설계
/*
template<typename IT, typename T>
IT xfind(IT first, IT last, const T& value)
{
	while (first != last && *first != value)
		++first;

	return first;
}
*/
// C++20 의 find 는 아래 처럼 1, 2 의 인자 타입이 다르게 설계
template<typename IT, typename S, typename T>
IT xfind(IT first, S sentinel, const T& value)
{
	while (first != sentinel && *first != value)
		++first;

	return first;
}

int main()
{
	std::list<int> s = { 1,2,3,4,5,6,7,8,9,10 };

	std::counted_iterator ci(s.begin(), 5);

	auto ret = xfind(ci, std::default_sentinel, 4);

}