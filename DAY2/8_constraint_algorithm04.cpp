#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>

// 1 => 04로 변경

int main()
{
	std::list<int> s = { 1,2,3,4,5,6,7,8,9,10 };

	auto p = std::next(s.begin(), 2); // 3을 가리키는 반복자


	// #1. counted iterator 개념
	// => C++20 에서 추가된 반복자
	// => 내부적으로 갯수를 관리하는 반복자
	// => template 이지만, 타입 인자 생략가능
	std::counted_iterator ci(p, 5);

	while (ci.count() != 0)
	{
		std::cout << *ci << std::endl;
		++ci;
	}
	
	// #2. std::find 같은 알고리즘에 사용하려면 "반복자 쌍" 이 필요하다.
	// => std::find(first, last, value)	
	// => 즉, 끝을 나타내는 반복자가 필요 합니다.
	// => counted_iterator 는 반복자 한개 안에 종료조건이 있습니다.

	// => 그래서 "sentinel" 개념이 도입 되었습니다

	std::counted_iterator ci2(p, 5);

	while (ci2 != std::default_sentinel)
	{
		std::cout << *ci2 << std::endl;
		++ci2;
	}
}









