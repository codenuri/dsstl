#include <iostream>
#include <vector>
#include <algorithm>


int main()
{
	std::vector<int> v = { 1,2,3,7,8,9,4,5,6,10 };


	for (auto e : v)
	{
		std::cout << e << ", ";
	}

	// �� for ���� ��Ȯ�� ����
	// => �����Ϸ��� �� �ڵ带 �Ʒ� ó�� �����մϴ�.

	auto first = v.begin();
	auto last  = v.end();

	for (; first != last; ++first)
	{
		auto e = *first;
		//---------------------------------
		std::cout << e << ", ";
	}

}