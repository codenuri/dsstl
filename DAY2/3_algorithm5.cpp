#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <string>
#include "show.h"

int main()
{
	std::vector<std::string> v = { "AA", "BB", "AA", "CC" };

	auto p = std::remove(v.begin(), v.end(), "AA");

	show(v); // ��� ������ ������
}


