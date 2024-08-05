// iterator1.cpp
#include <iostream>
#include <list>

int main()
{
	int x[5] = { 1,2,3,4,5 };

	int* p = x;
	*p; 
	++p;


	std::list<int> s = { 1,2,3,4,5 };

	// iterator : 포인터 역활의 객체
	// => raw pointer 가 아닌 객체 지만
	// => 포인터 처럼 사용가능

	std::list<int>::iterator p2 = s.begin();
	*p2; 
	++p2;
}










