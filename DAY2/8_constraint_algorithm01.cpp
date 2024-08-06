#include <iostream>
#include <algorithm>
#include <list>

// C++20 에서 추가된 새로운 개념소개
// #1. 인자로 반복자뿐아니라 컨테이너 자체를 받을수 있게 되었습니다.

int main()
{
	std::list<int> s = { 1,2,3,4,5,6,7,8,9,10 };

	auto ret1 = std::find(s.begin(), s.end(), 3);
	auto ret2 = std::find(s, 3);

}