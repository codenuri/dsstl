#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>

// 1 => 04�� ����

int main()
{
	std::list<int> s = { 1,2,3,4,5,6,7,8,9,10 };

	auto p = std::next(s.begin(), 2);


	std::counted_iterator ci(p, 5);

	// std::find �� ci ���� '4' ã�ƺ�����
	// => �������ؼ� ���� ������ �� Ȯ���� ������
	// => �� �������� ������ ������. 
	auto ret = std::find(? );

}









