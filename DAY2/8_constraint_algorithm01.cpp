#include <iostream>
#include <algorithm>
#include <list>

// C++20 ���� �߰��� ���ο� ����Ұ�
// #1. ���ڷ� �ݺ��ڻӾƴ϶� �����̳� ��ü�� ������ �ְ� �Ǿ����ϴ�.

int main()
{
	std::list<int> s = { 1,2,3,4,5,6,7,8,9,10 };

	auto ret1 = std::find(s.begin(), s.end(), 3);
	auto ret2 = std::find(s, 3);

}