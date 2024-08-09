// 4_traits
#include <iostream>

// type traits : 템플릿 인자 T에 대한 다양한 특질(특성)을 조사하는 기술
//				 C++11 때 추가됨.

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

