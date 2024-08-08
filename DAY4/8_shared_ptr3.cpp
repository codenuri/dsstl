#include <iostream>
#include <memory>
#include "show.h"
void foo(void* p) { free(p); }

int main()
{
	// #1. �Ʒ� �ڵ�� ��� "new" �� �޸� �Ҵ�
	std::shared_ptr<int> sp1(new int);
	std::shared_ptr<int> sp2 = std::make_shared<int>(0);


	// #2. "new" �� �ƴ� �ٸ� ������� �޸� �Ҵ��ϱ�

//	std::shared_ptr<int> sp3(static_cast<int*>( malloc(sizeof(int)));
					// bug : �Ҵ��� malloc, ������ : delete

	// ��� #1. ������ 2��° ���ڷ� ������ ����
	std::shared_ptr<int> sp3(static_cast<int*>(malloc(sizeof(int)),
						   	 &foo); // ������ 2��° ���ڷ� ������ ����
									// �Ҹ��ڿ��� delete �ƴ� fooȣ��

	std::shared_ptr<int> sp4(static_cast<int*>(malloc(sizeof(int)),
		&free); // free�� ���� ���޵� ����


	// ��� #2. allocator ����
	// => std::make_shared �� �ƴ� std::allocate_shared

	std::shared_ptr<int> sp5 =
		std::allocate_shared<int>( debug_alloc<int>(), 0 );
}







