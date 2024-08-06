#include <iostream>
#include <algorithm>
#include <list>

// C++20 ���� �߰��� ���ο� ����Ұ�
// #1. ���ڷ� �ݺ��ڻӾƴ϶� �����̳� ��ü�� ������ �ְ� �Ǿ����ϴ�.

int main()
{
	std::list<int> s = { 1,2,3,4,5,6,7,8,9,10 };

	// C++98 : ������� ������ "�����̳� ����"�� ����� �������ϴ�
	// std::sort(first, last)  // 1
	// std::sort(container)    // 2
	// std::sort(container, compare��ü) //3. �����̳� ������ �񱳰�ü����
	// 1, 3 ���� �Լ� ���ø� ����� �����մϴ�.
	// => �׷��� ����� �������ϴ�.
	auto ret1 = std::find(s.begin(), s.end(), 3);	// ok
//	auto ret2 = std::find(s, 3);					// error

	// C++20 : concept �̶�� ������ ���ԵǾ �� ������ �ذ�Ǿ����ϴ�
	// => std::ranges ��� namespace ��
	// => ���ο� find �� �����ϱ�� ����.. 
	auto ret3 = std::ranges::find(s.begin(), s.end(), 3);	// ok
	auto ret4 = std::ranges::find(s, 3);					// ok

}
// vs �������� C++20 ������� �����ּ���.