#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include "show.h"

// 알고리즘과 동일한 이름의 멤버 함수가 있다면 멤버 함수를 사용하라.

int main()
{
	std::vector<int> v = { 1,2,3,1,2,3,1,2,3,1 };

	auto p = std::remove(v.begin(), v.end(), 3);

	show(v);

	v.erase(p, v.end());

	show(v);


	return 0;
}












