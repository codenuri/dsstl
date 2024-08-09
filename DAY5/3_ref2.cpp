#include <iostream>
#include <functional>

// C++ ǥ���� std::reference_wrapper<int> �� ������ ������ ���ô�

template<typename T> 
class my_reference_wrapper
{
	T* obj;
public:
	my_reference_wrapper(T& r)
		: obj(&r) {}

	// ��ȯ ������ : ��ü�� �ٸ� Ÿ������ ��ȯ�ɶ� ȣ��Ǵ� �Լ�
	// int& r3 = r1; // r1.operator int&() ȣ��. �� �Ʒ� �Լ� ȣ��
	operator T& () { return *obj; }
};

int main()
{
	int n1 = 10;
	int n2 = 20;

	my_reference_wrapper<int> r1 = n1;
	my_reference_wrapper<int> r2 = n2;

	r1 = r2;	

	// raw reference �� ȣȯ�ǰ� ����� ���ô�.
	int& r3 = r1; // r1.operator int&() �Լ��� ã�� �˴ϴ�.


	std::cout << n1 << std::endl; 
	std::cout << n2 << std::endl; 

	// my_reference_wrapper Ÿ���� �⺻������ cout ���� ��� �ȵ˴ϴ�.
	// => �̰��, �����Ϸ��� cout ���� ��°����� Ÿ������ ��ȯ�ɼ� �ִ���
	//    ã�� �˴ϴ�.
	// => int& �� ��ȯ �����ѵ�, int& Ÿ���� ��� �����մϴ�

	// ��, "cout << r1.operator int&() " �� ����˴ϴ�.

	std::cout << r1 << std::endl; 
	std::cout << r2 << std::endl; 
}

