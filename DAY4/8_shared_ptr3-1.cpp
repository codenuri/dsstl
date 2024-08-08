// �Ʒ� ��ũ�� ���� �ϸ�
// visual studio ���� "���Ȱ��� ���� ���� ����� �ǹ�"
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <memory>
#include "show.h"

int main()
{
//	std::shared_ptr<int> sp1( new int[10] );
			// ����
			// "delete[]" �ؾ� �ϴµ� sp1�� �Ҹ��ڿ����� "delete"
			// "������ �����ؾ� �մϴ�"

	std::shared_ptr<int> sp1(new int[10],
							[](int* p) { delete[] p; } );


	// C++17 ���ʹ� �Ʒ�ó���� ����.
	std::shared_ptr< int[] > sp2(new int[10]);

	// �׷���, int[10] ���� ���� �����Ұ��̶��!!
	// => vector �� ����ϸ� ���� ������??!!

	// ����� �޸� ���� �ڿ��� ���� �����ϱ� �մϴ�.
	std::shared_ptr< FILE > sp5( fopen("a.txt", "wt"), &fclose );

}







