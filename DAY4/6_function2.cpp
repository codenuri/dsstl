#include <iostream>
#include <functional>
using namespace std::placeholders;

int main()
{
	// std::function ���� "ȣ�Ⱑ���� ����" �� ������ �ֽ��ϴ�.
	// => �Ϲ� �Լ�,   ��� �Լ�
	// => ���� ǥ����, �Լ� ��ü��

	std::function<int(int, int)> f;

	f = [](int a, int b) { return a + b; };

	std::cout << f(1, 2) << std::endl;



	f = std::multiplies<int>();

	std::cout << f(1, 2) << std::endl;
}