#include <iostream>
#include <list>
#include <algorithm>

int main()
{
	std::list<int> s1 = { 1, 2, 3, 4, 5 };
	std::list<int> s2 = { 0, 0, 0, 0, 0 };

	// s1�� ��� ��Ҹ� s2�� ������ ������
	// 
	// #1. [] �����ڿ� for �� - list �� �ȵ˴ϴ�.
	for (int i = 0; i < 5; i++)
	{
//		s2[i] = s1[i];	// error. list �� [] ���� �ȵ�
						// vector �� [] ���� ����
						// ������ 3������
	}

	// #2. �ݺ��ڷ� �ؾ� �մϴ�.
	auto p1 = s1.begin();
	auto p2 = s1.end();
	auto p3 = s2.begin();

	while (p1 != p2)
	{
		*p3 = *p1;
		++p1;
		++p3;
	}

	// #3. std::copy �˰��� - ������ �����ð��� ��� ����մϴ�
	// => std::copy �� ���������� ��ó�� ������.
	std::copy( s1.begin(), s1.end(), s2.begin() );
}











