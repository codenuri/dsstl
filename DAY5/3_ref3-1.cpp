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

	// ��ǥ : forward ����ؼ� n �� foo ���� ���纻 ���� ������ ���ô�.

	forward(n);


	std::cout << n << std::endl;  
}
