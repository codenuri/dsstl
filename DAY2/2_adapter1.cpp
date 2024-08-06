#include <iostream>
#include <list>
#include <algorithm>

// iterator         : ++ 연산지 => 방향으로 이동
// reverse_iterator : ++ 연산지 <= 방향으로 이동

int main()
{
	std::list<int> s = { 1,2,3,4,5,6,7,3,9,10};

	auto p1 = s.begin();
	auto p2 = s.end();

	// #1. 클래스를 직접 사용
	// std::reverse_iterator< 반복자타입 > p3( 반복자 );
	
	auto p = std::next(p1, 3); // 4 를 가리키는 반복자

	std::reverse_iterator< std::list<int>::iterator > p3(p); // p 한개 앞으로 초기화 됩니다.

	std::cout << *p3 << std::endl; // 3
	++p3;
	std::cout << *p3 << std::endl; // 2

	// #2. reverse_iterator 객체를 생성해주는 함수 템플릿 사용
	// => object generator 기술
	auto p4 = std::make_reverse_iterator(p); // p4는 p3 과 동일
	++p4;

	std::cout << *p4 << std::endl;
}
