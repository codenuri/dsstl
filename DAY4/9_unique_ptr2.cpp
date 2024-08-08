#include <memory>
#include <iostream>

int main()
{
	// #1. ���� �ɼ� ����.
	std::unique_ptr<int> up1(new int);
//	std::unique_ptr<int> up2 = up1; // error

	// #2. std::move �� ����
	// => �ڿ��� ���� ����ϴ� ���� �ƴ϶�
	// => �����Ѱ�!!
	std::unique_ptr<int> up2 = std::move(up1); // ok


	// #3. ������� ���� ����
	std::cout << sizeof(up2) << std::endl; // raw pointer �� ���� ũ��

	
	// #4. std::make_unique ����
	// => control block �� ������
	// => �ڿ��Ҵ�� ����Ʈ������ ������ �ѹ��� �ؼ� ������ ����
	std::unique_ptr<int> up3 = std::make_unique<int>(0);

}