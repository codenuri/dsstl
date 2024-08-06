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

	std::cout << typeid(f1).name() << std::endl;
	std::cout << typeid(f2).name() << std::endl;

}