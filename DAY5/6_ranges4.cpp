#include <iostream>
#include <vector>
#include <algorithm>
#include <ranges> // 이 안에 take_view 같은 view 있습니다.
				  // C++20 으로 하세요

// 모든 view 는 중첩될수 있습니다.

int main()
{
	std::vector<int> v = { 1,2,3,7,8,9,4,5,6,10 };

	// #1. 클래스 직접 사용
	// => "std::ranges" 라는 이름의 namespace 
//	std::ranges::filter_view fv(v, [](int n) { return n % 2 == 0; });
//	std::ranges::take_view tv(fv, 3);
//	std::ranges::reverse_view rv(tv);
	

	// #2. 함수 버전 사용
	// => "std::views" 라는 이름의 namespace 
	// => 클래스이름에서 "view" 를 제거하고, 인자갯수는 클래스 버전과동일
//	auto fv = std::views::filter(v, [](int n) { return n % 2 == 0; });
//	auto tv = std::views::take(fv, 3);
//	auto rv = std::views::reverse(tv);

	// #3. pipe line
	// => 인자의 갯수가 한개 줄어들게 됩니다.
	
	auto rv = v | std::views::filter([](int n) { return n % 2 == 0; })
				| std::views::take(3)
				| std::views::reverse;


	for (auto e : rv) // 결과 예측해 보세요 4, 8, 2
	{
		std::cout << e << ", ";
	}



}