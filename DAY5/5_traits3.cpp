#include <iostream>
#include <type_traits>

// traits ����
// 1. Ÿ�Կ� ���� ���� : std::is_xxx::value
// 2. ���� Ÿ�� ���   : std::remove_xxx::type

template<typename T> struct remove_pointer
{
	using type = T;
};

template<typename T> struct remove_pointer<T*>
{
	using type = T;
};

int main()
{
	remove_pointer<int*>::type n; // int n
}


template<typename T> void foo(const T& b)
{
	typename std::remove_pointer<T>::type n;

	std::cout << typeid(n).name() << std::endl;
}