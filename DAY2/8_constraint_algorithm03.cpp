#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>
#include <string>
#include <functional>
#include "show.h"

// projection ����

int main()
{
	std::vector<std::string> v = { "AAAA", "DD", "C", "BBBBB" };

//	std::ranges::sort(v); // ������ ���� ����

	// 2�� �Լ���ü ���� - C++98 �� ���� ����
//	std::ranges::sort(v, std::greater{}); // ������ ���� ����
										  // greater<string> ��
										  // Ÿ�Ի�������, C++17 ����

	// 2�� �Լ���ü + Projection ���
	// 2��° : ���Լ�
	// 3��° : Projection (���ڰ� �Ѱ��� �Լ�)
	// 2�� ���ڿ��� ���Ҷ� �Ʒ� ó�� �մϴ�.
	// => ���Լ�( Projection("AA"), Projection("B"))

	std::ranges::sort(v,
					  std::greater{},
					 [](const std::string& s) { return s.size(); });


	// Projection �� ���� �پ��� ���°� �����մϴ�.
	std::ranges::sort(v,
		std::greater{},
		&std::string::size ); // 1. ��� �Լ� �ּ� ����
							  // 2. &Point::y  ó�� ��� ���� �ּҵ� ����
							  // 3. ���� �Լ�(��ü)�� ����

	show(v);


}




