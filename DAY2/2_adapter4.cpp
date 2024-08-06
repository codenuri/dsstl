#include <iostream>
#include <list>
#include <algorithm>

int main()
{
	std::list<int> s = { 1,2,3,4,5,6,7,3,9,10 };

	// 컨테이너에서 꺼내는 반복자는 4개 종류가 있습니다.

	// #1. 기본형
	std::list<int>::iterator p1 = s.begin(); // std::begin(s);

	// #2. 상수 반복자
	std::list<int>::const_iterator p2 = s.cbegin(); // std::cbegin(s);
//	*p2 = 10; // error. 상수 반복자는 읽기만 가능

	// #3. reverse 반복자
	std::list<int>::reverse_iterator p3 = s.rbegin(); // std::rbegin(s);

	// #4. const reverse 반복자
	std::list<int>::const_reverse_iterator p4 = s.crbegin(); 
										// std::crbegin(s);

}
