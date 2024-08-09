#include <iostream>

void foo(int& a) { a = 200; }

// forword 
// => ���� ���� ���ڸ� foo �� �ٽ� ����
// => �ٽ� ���ڴ� "by value" 

template<typename F, typename T> 
void forward(T arg)
{
	foo(arg);
}

int main()
{
	int n = 10;
//	foo(n);	// ���� ����, n�� 200���� ����˴ϴ�.

	forward(n);

	// forward �� ���� arg �� foo �� ���޵Ȱ�
	// ���� n �� ��� 10
	std::cout << n << std::endl;  // 10
}
