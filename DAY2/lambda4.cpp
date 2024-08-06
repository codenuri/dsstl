#include <iostream>
#include <algorithm>
#include <vector>
#include <functional> 

int main()
{
	std::vector<int> v = { 1,3,5,7,9,2,4,6,8,10 };

	// 아래 3줄을 평가해보세요. 좋은 코드? 나쁜 코드 ?
	// => 동일한 람다 표현식이지만 모두 다른 타입
	// => 생성된 sort 함수는 3개!!
	std::sort(v.begin(), v.end(), [](int a, int b) {return a < b; });
	std::sort(v.begin(), v.end(), [](int a, int b) {return a < b; });
	std::sort(v.begin(), v.end(), [](int a, int b) {return a < b; });


	// 해결책 #1. auto 변수에 담아서 사용
	auto cmp = [](int a, int b) {return a < b; };

	std::sort(v.begin(), v.end(), cmp);
	std::sort(v.begin(), v.end(), cmp);
	std::sort(v.begin(), v.end(), cmp);


	// 해결책 #2. < 연산을 수행하는 함수 객체는 이미  표준에 있다.

	std::less<int> f;
	std::sort(v.begin(), v.end(), f);
	std::sort(v.begin(), v.end(), f);
	std::sort(v.begin(), v.end(), std::less<int>{}); // 이렇게 해도
												// 위와 같은 sort


}









