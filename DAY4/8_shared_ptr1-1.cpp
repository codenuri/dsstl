// 8_shared_ptr1-1
#include <memory>

int main()
{
	int* raw_pointer = new int;

	// �Ʒ� �ڵ带 ������ ������
	// => ������ ��ü(�޸�)�� ���ؼ�
	// => control block �� ������ 2�� �����˴ϴ�.
	std::shared_ptr<int> sp1(raw_pointer);
	std::shared_ptr<int> sp2(raw_pointer);

	// ����Ʈ ������ ���� �ݾ�
	// "�ڿ��� �ּҸ� raw pointer �� ���� ����!"
	// "�ڿ��� �ּҴ� ��� ����Ʈ �����Ϳ� ��ƾ� �Ѵ�."
}