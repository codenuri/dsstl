#include <iostream>
#include <algorithm>
#include <vector>
#include <functional> // std::less<>, std::greater<> 가 여기있습니다.

inline bool cmp1(int a, int b) { return a < b; }

int main()
{
	std::vector<int> v = { 1,3,5,7,9,2,4,6,8,10 };

	// std::sort 사용법

	// #1. 비교 정책을 전달하지 않는 경우 - 오름 차순
	std::sort( v.begin(), v.end() ); // 1, 2, 3, 4, 5, ...


	// #2. 비교정책을 전달하는 경우 - 3번째 인자로 이항조건자전달


	// #2-1. 일반함수 전달
	std::sort(v.begin(), v.end(), cmp1); 
								// => 일반 함수 전달
								// => 인라인 치환 안됨. 
								// => 데이타 양이 많으면 성능저하!


	// #2-2. 함수 객체 전달(C++ 표준 함수 객체)
	std::less<int> f1;		// 1st_arg < 2nd_arg
	std::greater<int> f2;	// 1st_arg > 2nd_arg

	std::sort(v.begin(), v.end(), f1);
							// => 함수객체 전달
							// => 인라인 치환됨.

	std::sort(v.begin(), v.end(), std::greater<int>{} );
							// => 임시객체로 전달


	// #2-3. 람다 표현식으로 전달
	std::sort(v.begin(), v.end(), 
				[](int a, int b) {return a < b; } );
							// => 람다 표현식으로 전달(C++11부터)
							// => 인라인 치환 됨..


}









