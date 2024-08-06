// 3_알고리즘과정책변경
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>    // 수치 관련 연산
#include <functional>
#include "show.h"


int main()
{
	std::vector<int> v1 = { 1,2,3,4,5,6,7,8,9,10 };
	std::vector<int> v2;

//	std::partial_sum(v1.begin(), v1.end(), std::back_inserter(v2));
								// => 기본 버전은 + 연산자 사용

	// * 를 사용한 부분합을 구해 보세요
//	std::partial_sum(v1.begin(), v1.end(), std::back_inserter(v2),
//									std::multiplies<int>{} );

	// 근접차
	std::adjacent_difference(v1.begin(), v1.end(),
							std::back_inserter(v2));

	show(v2);
}
