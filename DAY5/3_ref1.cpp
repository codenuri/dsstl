#include <iostream>
#include <functional>

// C++ 언어의 reference 문법   : 대입연산시 "값의 이동" 참조는 이동될수 없다.
// std::reference_wrapper<int>: 대입연산시 "참조의 이동"

int main()
{
	int n1 = 10;
	int n2 = 20;

//	int& r1 = n1;  
//	int& r2 = n2;

	std::reference_wrapper<int> r1 = n1;
	std::reference_wrapper<int> r2 = n2;

	r1 = r2;	// 이순간의 동작 방식을 생각해 보세요

	// 결과 예측해 보세요            int&     reference_wrappeer<int>
	std::cout << n1 << std::endl; // 20			10
	std::cout << n2 << std::endl; // 20			20
	std::cout << r1 << std::endl; // 20			20
	std::cout << r2 << std::endl; // 20			20
}

