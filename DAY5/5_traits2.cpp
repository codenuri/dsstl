#include <iostream>

template<typename T> struct is_pointer
{
	enum { value = false };
};

// template 부분 특수화 문법
// => 타입이 특정 조건인 경우 다른 구현을 제공하는 문법
template<typename T> struct is_pointer<T*>
{
	enum { value = true };
};


template<typename T> void foo(const T& b)
{
	// T : int, int*
	if ( is_pointer<T>::value )

		std::cout << "포인터" << std::endl;
	else
		std::cout << "포인터 아님" << std::endl;
	
}

int main()
{
	int n = 10;

	printv(n);
	printv(&n);
}

