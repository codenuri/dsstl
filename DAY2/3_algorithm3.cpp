#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include "show.h"

// 알고리즘과 동일한 이름의 멤버 함수가 있다면 멤버 함수를 사용하라.

// 왜 알고리즘와 동일한 이름의 멤버함수가 있는가 ?

// 1. 컨테이너의 반복자를 알고리즘에 보낼수 없을때!!
//    std::sort(s.begin(), s.end());  // s가 list 라면 에러
//	  s.sort(); // ok


// 2. 컨테이너의 특성에 맞는 보다 최적화된 구현이 있을때
//    std::remove(s.begin(), s.end(), 3); // ok.
//    s.remove(3); // 하지만 이코드가 더 좋은 성능


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












