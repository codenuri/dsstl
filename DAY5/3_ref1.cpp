#include <iostream>
#include <functional>

// C++ ����� reference ����   : ���Կ���� "���� �̵�" ������ �̵��ɼ� ����.
// std::reference_wrapper<int>: ���Կ���� "������ �̵�"

int main()
{
	int n1 = 10;
	int n2 = 20;

//	int& r1 = n1;  
//	int& r2 = n2;

	std::reference_wrapper<int> r1 = n1;
	std::reference_wrapper<int> r2 = n2;

	r1 = r2;	// �̼����� ���� ����� ������ ������

	// ��� ������ ������            int&     reference_wrappeer<int>
	std::cout << n1 << std::endl; // 20			10
	std::cout << n2 << std::endl; // 20			20
	std::cout << r1 << std::endl; // 20			20
	std::cout << r2 << std::endl; // 20			20
}

