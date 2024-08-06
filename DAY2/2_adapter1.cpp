#include <iostream>
#include <list>
#include <algorithm>

int main()
{
	std::list<int> s = { 1,2,3,4,5,6,7,3,9,10};

	auto p1 = s.begin();
	auto p2 = s.end();

	// iterator         : ++ 연산지 => 방향으로 이동
	// reverse_iterator : ++ 연산지 <= 방향으로 이동

	// #1. 클래스를 직접 사용
	// std::reverse_iterator< 반복자타입 > p3( 반복자 );
	
	auto p = std::next(p1, 3); // 4 를 가리키는 반복자

	std::reverse_iterator< > p3()
}
