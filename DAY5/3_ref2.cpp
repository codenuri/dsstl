#include <iostream>
#include <functional>

// C++ ǥ���� std::reference_wrapper<int> �� ������ ������ ���ô�

class my_reference_wrapper
{
public:
};

int main()
{
	int n1 = 10;
	int n2 = 20;

	my_reference_wrapper<int> r1 = n1;
	my_reference_wrapper<int> r2 = n2;

	r1 = r2;	

	std::cout << n1 << std::endl; 
	std::cout << n2 << std::endl; 
	std::cout << r1 << std::endl; 
	std::cout << r2 << std::endl; 
}

