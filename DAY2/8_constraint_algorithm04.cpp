#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>

// 1 => 04�� ����

int main()
{
	std::list<int> s = { 1,2,3,4,5,6,7,8,9,10 };

	auto p = std::next(s.begin(), 2); // 3�� ����Ű�� �ݺ���


	// #1. counted iterator ����
	// => C++20 ���� �߰��� �ݺ���
	// => ���������� ������ �����ϴ� �ݺ���
	// => template ������, Ÿ�� ���� ��������
	std::counted_iterator ci(p, 5);

	while (ci.count() != 0)
	{
		std::cout << *ci << std::endl;
		++ci;
	}
	
	// #2. std::find ���� �˰��� ����Ϸ��� "�ݺ��� ��" �� �ʿ��ϴ�.
	// => std::find(first, last, value)	
	// => ��, ���� ��Ÿ���� �ݺ��ڰ� �ʿ� �մϴ�.
	// => counted_iterator �� �ݺ��� �Ѱ� �ȿ� ���������� �ֽ��ϴ�.

	// => �׷��� "sentinel" ������ ���� �Ǿ����ϴ�

	std::counted_iterator ci2(p, 5);

	while (ci2 != std::default_sentinel)
	{
		std::cout << *ci2 << std::endl;
		++ci2;
	}
}









