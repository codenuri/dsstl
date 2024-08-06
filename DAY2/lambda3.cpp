// lambda2.cpp
#include <iostream>
#include <algorithm>
#include <vector>
#include <functional> 

int main()
{
	auto f1 = [](int a, int b) { return a + b; };
			// class AAA{}; AAA{}

	auto f2 = [](int a, int b) { return a + b; };
			// class BBB{}; BBB{}

	// f1, f2 는 "같은 타입" 일까요 ? "다른 타입" 일까요 ?
	// => 다른 타입
	std::cout << typeid(f1).name() << std::endl;
	std::cout << typeid(f2).name() << std::endl;


	// #2. 람다 표현식으로 초기화된 auto 변수에 다른 람다표현식을
	// 담을수 없습니다
	f2 = [](int a, int b) { return a + b; }; // error

}