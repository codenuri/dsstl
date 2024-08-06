#include <iostream>
#include <vector>
#include <algorithm>
#include "show.h"

int main()
{
	std::vector<int> v1 = { 1,2,3,4,5,6,7,8,9,10 };
	std::vector<int> v2;

	// 아래 코드는 주어진 구간에서 3을 0을 변경하는 코드 입니다.
	std::replace(v1.begin(), v1.end(), 3, 0);

	// 위 코드를 참고해서 아래 주석 처럼 동작하는 코드를 만들어 보세요

	// [v1.begin(), v1.end() ) 에서 "홀수를 0으로 변경한 결과를"
	// v2 에 넣어 보세요


	show(v2); // 0, 2, 0, 4, 0, 6, 0, 8, 0, 10
}
