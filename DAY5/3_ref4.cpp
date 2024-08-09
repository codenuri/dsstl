#include <iostream>
#include <string>
#include <functional>

void foo(int& n) {	n = 100;}

int main()
{
	std::function<void()> f;

	int k = 0;

	// �Ʒ� �ڵ�� k ��ü�� bind �ϴ� ���� �ƴ϶� k �� ���� bind �մϴ�.
	// => k ��ü��  bind �ߴٸ� k �� �ı����� ȣ��Ǵ� ������
	//   �߻��Ҽ� �ֽ��ϴ�

	// �׷���, std::bind �� "���� ����" �ϴ� ���

	f = std::bind(&foo, k);

	f(); // k ��ü�� �����ߴٸ� foo(k)
		 // k�� ���� �����ߴٸ� foo(0)

	// �Ʒ� �ڵ��� ����� ������ ������
	std::cout << k << std::endl;
}