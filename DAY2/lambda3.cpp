// lambda2.cpp
#include <iostream>
#include <algorithm>
#include <vector>
#include <functional> 

int main()
{
	auto f1 = [](int a, int b) { return a + b; };
			// class AAA{}; AAA{}

	auto f2 = [](int a, int b) { return a + b; };
			// class BBB{}; BBB{}

	// f1, f2 �� "���� Ÿ��" �ϱ�� ? "�ٸ� Ÿ��" �ϱ�� ?
	// => �ٸ� Ÿ��
	std::cout << typeid(f1).name() << std::endl;
	std::cout << typeid(f2).name() << std::endl;


	// #2. ���� ǥ�������� �ʱ�ȭ�� auto ������ �ٸ� ����ǥ������
	// ������ �����ϴ�
	f2 = [](int a, int b) { return a + b; }; // error

}