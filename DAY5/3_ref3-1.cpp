#include <iostream>

void foo(int& a) { a = 200; }

template<typename F, typename T>
void forward(T arg)
{
	foo(arg);
}

int main()
{
	int n = 10;

	// 목표 : forward 사용해서 n 을 foo 까지 복사본 없이 전달해 봅시다.

	forward(n);


	std::cout << n << std::endl;  
}
