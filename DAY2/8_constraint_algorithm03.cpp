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
	std::ranges::sort(v,
					  std::greater{},
					 [](const std::string& s) { return s.size(); });

	show(v);


}




