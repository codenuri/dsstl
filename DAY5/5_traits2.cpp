#include <iostream>

template<typename T> struct is_pointer
{
	enum { value = false };
};

// template �κ� Ư��ȭ ����
// => Ÿ���� Ư�� ������ ��� �ٸ� ������ �����ϴ� ����
template<typename T> struct is_pointer<T*>
{
	enum { value = true };
};


template<typename T> void foo(const T& b)
{
	// T : int, int*
	if ( is_pointer<T>::value )

		std::cout << "������" << std::endl;
	else
		std::cout << "������ �ƴ�" << std::endl;
	
}

int main()
{
	int n = 10;

	printv(n);
	printv(&n);
}

