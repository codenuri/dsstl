#include <list>
#include <vector>
#include <algorithm>
#include "show.h"

int main()
{
	std::vector<int> v = { 1,2,3,4,5 };
	std::list<int> s = { 1,2,3,4,5 };

	// v 와 s 의 모든 요소를 뒤집어(reverse) 보세요
	// 1. 멤버함수에서 reverse 가 있는지 찾으세요
	// 2. 멤버함수에 없으면 std::reverse() 있는지 확인

	std::reverse(v.begin(), v.end());
//	std::reverse(s.begin(), s.end()); // ok
	s.reverse(); // 하지만 멤버도 있으므로 멤버 사용

	show(v); // 5, 4, 3, 2, 1
	show(s); // 5, 4, 3, 2, 1
}