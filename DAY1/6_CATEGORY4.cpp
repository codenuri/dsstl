#include <iostream>
#include <vector>
#include <list>
#include <iterator>

int main()
{
	std::list<int> s = { 1,2,3,4,5,6,7,8,9,10 };

	auto p = s.begin();

	// list �ݺ���(������) �� + ������ �ȵ˴ϴ�.
	// �� �ȵǴ��� ������ ������
	// ���� + �� �ȴٸ� �Ʒ� �ڵ��� ������ �����غ�����

	for (int i = 0; i < s.size(); i++)
	{
		*(p + i) = 0;
	}
}