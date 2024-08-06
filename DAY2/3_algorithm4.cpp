#include <list>
#include <vector>
#include <algorithm>
#include "show.h"

int main()
{
	std::vector<int> v = { 1,2,3,4,5 };
	std::list<int> s = { 1,2,3,4,5 };

	// v 와 s 의 모든 요소를 뒤집어 보세요

	show(v); // 5, 4, 3, 2, 1
	show(s); // 5, 4, 3, 2, 1
}