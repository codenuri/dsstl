#include <iostream>

// #1. �Ʒ� ����� ���ʰ��� traits �� �ֽ��ϴ� C++11 ���� ��밡��
#include <type_traits>

template<typename T> void foo(const T& b)
{
	// #2. ���� : std::is_ �� ����
	bool b1 = std::is_pointer<T>::value;
	bool b2 = std::is_pointer_v<T>;  // C++17 ���� ����


	// #3. ������ Ÿ�� ���
	typename std::remove_pointer<T>::type n;
	std::remove_pointer_t<T> n1; // ���� ���� - C++14 ����

//	std::add_
}

// C++14 ���� remove_pointer ���� ���� ����ϱ� ���� ���� ����
template<typename T>
using remove_pointer_t = typename std::remove_pointer<T>::type;




int main()
{
	int n = 10;

	printv(n);
	printv(&n);
}

