#include <iostream>
#include <list>
#include <vector>
#include <algorithm> // find ���� �˰���(�Ϲ��Լ�)��
					// �� ����� �ֽ��ϴ�.
int main()
{
	std::list<int> c = { 1,2,3,4,5,6,7,8,9,10 };

	// �Ʒ� �ڵ忡�� ? ä�� ������
	? p = std::find(? , ? , 5 ); 

	if (p == ? )
		std::cout << "�˻�����\n";
	else
		std::cout << "�˻����� : " << ? << std::endl;
}