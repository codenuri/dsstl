#include <list>
#include <vector>
#include <algorithm>
#include "show.h"

int main()
{
	std::vector<int> v = { 1,2,3,4,5 };
	std::list<int> s = { 1,2,3,4,5 };

	// v �� s �� ��� ��Ҹ� ������ ������

	show(v); // 5, 4, 3, 2, 1
	show(s); // 5, 4, 3, 2, 1
}