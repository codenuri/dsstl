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
	 
	
	// #1. C++17 부터는 아래 처럼
//	std::back_insert_iterator p(s); // p 는 s 끝에 추가하는 반복자
									

	// #2. C++14 까지는 템플릿 인자 필요
//	std::back_insert_iterator< std::list<int> > p(s); // C++14는 타입인자 필요


	// #3. back_insert_iterator<> 클래스를 직접 사용하지 말고
	//     back_insert_iterator 객체를 만드는 도움 함수 사용
	// => insert0 에서 배운 "object generator" 기술로 만든 함수

	auto p = std::back_inserter(s);



	*p = 20; // s.push_back(20);
	*p = 30; // s.push_back(30);

	for (auto e : s)
	{
		std::cout << e << ", ";
	}

}
