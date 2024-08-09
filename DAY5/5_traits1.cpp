// 4_traits
#include <iostream>

template<typename T> void printv(const T& b)
{
	if ( T 가 포인터 타입 이라면 )
		std::cout << v << " : " << *v << std::endl;
	else
		std::cout << v << std::endl;
}

int main()
{
	int n = 10;
	double d = 10;

	printv(n);
	printv(d);
	printv(&n);
}

