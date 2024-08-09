#include <iostream>
#include <type_traits>

// traits ����
// 1. Ÿ�Կ� ���� ���� : is_xxx::value
// 2. ���� Ÿ�� ���   : remove_xxx::type


int main()
{
	remove_pointer<int*>::type n; // int n
}




template<typename T> void foo(const T& b)
{
	typename std::remove_pointer<T>::type n;

	std::cout << typeid(n).name() << std::endl;
}