// 1���� : iterator
// 2���� : algorithm
// 3���� : container

#include <iostream>
#include <memory>

int main()
{
	// �޸� �Ҵ� ��� #1. new/delete ���
	int* p1 = new int;
	delete p1;


	// �޸� �Ҵ� ��� #2. allocator ���

	std::allocator<int> ax; // �޸� �Ҵ��

	int* p2 = ax.allocate(10);	// int 10�� ũ�� �޸� �Ҵ�
								// new int[10] �� �ǹ�

	ax.deallocate(p2, 10);	// �޸� ����
							// delete[] p2;

}