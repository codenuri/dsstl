#include <iostream>
#include <type_traits>

// traits 종류
// 1. 타입에 대한 질의 : is_xxx::value
// 2. 변형 타입 얻기   : remove_xxx::type


int main()
{
	remove_pointer<int*>::type n; // int n
}




template<typename T> void foo(const T& b)
{
	typename std::remove_pointer<T>::type n;

	std::cout << typeid(n).name() << std::endl;
}