#include <iostream>
#include <list>
#include <iterator>

// 삽입반복자종류

int main(int argc, char** argv)
{
	std::list<int> s1 = { 1, 2, 3, 4, 5 };
	std::list<int> s2 = { 0, 0, 0, 0, 0 };

	// #1. 클래스 버전
	std::back_insert_iterator< std::list<int>  > p1(s2);
	std::front_insert_iterator< std::list<int> > p2(s2);

	std::insert_iterator< std::list<int> > p3(s2,		// 컨테이너
							std::next(s2.begin(), 2) );	// 삽입할 위치

//	std::copy(s1.begin(), s1.end(), p3); // 0, 0, 1,2,3,4,5,0,0,0

	// #2. 함수 버전
	std::copy(s1.begin(), s1.end(), std::back_inserter(s2));
	std::copy(s1.begin(), s1.end(), std::front_inserter(s2));
	std::copy(s1.begin(), s1.end(), std::inserter(s2, s2.begin()));


	for (auto& n : s2)
		std::cout << n << ", ";
}
