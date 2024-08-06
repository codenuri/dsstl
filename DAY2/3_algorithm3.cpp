#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include "show.h"

// 알고리즘과 동일한 이름의 멤버 함수가 있다면 멤버 함수를 사용하라.

int main()
{
//	std::vector<int> v = { 1,2,3,1,2,3,1,2,3,1 };
	std::list<int> v = { 1,2,3,1,2,3,1,2,3,1 };

	// v 가 list 라도 아래 코드는 문제 없이 동작합니다.
	// => 그런데, 성능을 생각해 보세요
//	auto p = std::remove(v.begin(), v.end(), 3);
//	show(v);
//	v.erase(p, v.end());

	// list 는 멤버 함수 remove 가 있습니다.
	v.remove(3); // 3을 찾을때 마다 제거.

	show(v);


	return 0;
}












