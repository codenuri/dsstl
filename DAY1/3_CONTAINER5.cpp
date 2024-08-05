// container5.cpp �߰�
#include <iostream>
#include <list>
#include <vector>
#include <algorithm> // find ���� �˰���(�Ϲ��Լ�)��
					 // �� ����� �ֽ��ϴ�.
int main()
{
//	std::list<int>   c = { 1,2,3,4,5,6,7,8,9,10 };
	std::vector<int> c = { 1,2,3,4,5,6,7,8,9,10 };

	// �Ʒ� �ڵ忡�� ? ä�� ������
	std::list<int>::iterator p = std::find( c.begin(), c.end(), 5);
								 // c.find(5)

	if (p == c.end() )
		std::cout << "�˻�����\n";
	else
		std::cout << "�˻����� : " << *p << std::endl;
}

// 1���� : iterator
// 2���� : algorithm
// 3���� : container 