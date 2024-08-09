#include <iostream>

void foo(int& a) { a = 200; }

// forword 
// => 전달 받은 인자를 foo 에 다시 전달
// => 핵심 인자는 "by value" 

template<typename F, typename T> 
void forward(T arg)
{
	foo(arg);
}

int main()
{
	int n = 10;
//	foo(n);	// 직접 전달, n은 200으로 변경됩니다.

	forward(n);

	// forward 의 인자 arg 가 foo 에 전달된것
	// 따라서 n 은 계속 10
	std::cout << n << std::endl;  // 10
}
