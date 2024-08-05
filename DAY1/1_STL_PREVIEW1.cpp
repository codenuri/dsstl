#include <iostream>
#include <list>

// 1. DAY1.zip 압축 풀러 보세요

// 2. DAY1.sln 더블 클릭 하시면 "visual studio 에서 열수 있습니다.

// 빌드 하는 법 : Ctrl + F5

// STL : Standard Template Library
// => C++ 표준 라이브러리

// C++98 : 자료구조(컨테이너)와 알고리즘 위주의 라이브러리

// C++11 : 자료구조 와 알고리즘 추가, 
//         스마트 포인터, 멀티 스레드, 시간, 랜덤등의 다양한 분야의 클래스 추가

// C++14/17 : filesystem, variant 등의 몇가지 분야 클래스 추가

// C++20 : range 라이브러리 추가


int main()
{
	std::list<int> s = { 1,2,3,4,5 };

	s.push_back(6);
	s.push_back(7);

	for (auto e : s)
	{
		std::cout << e << std::endl;
	}
}