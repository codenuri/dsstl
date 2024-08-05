#include <iostream>
#include <list>
#include <iterator>

int main(int argc, char** argv)
{
	std::list<int> s = { 1, 2, 3, 4, 5};

	// 컨테이너의 끝에 삽입 하는 방법

	// #1. push_back 사용
	s.push_back(10);


	// #2. 삽입반복자 사용
	std::back_insert_iterator p(s); // p 는 s 끝에 추가하는 반복자

	*p = 20; // s.push_back(20);

}
