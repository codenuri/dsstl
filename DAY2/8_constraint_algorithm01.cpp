#include <iostream>
#include <algorithm>
#include <list>

// C++20 에서 추가된 새로운 개념소개
// #1. 인자로 반복자뿐아니라 컨테이너 자체를 받을수 있게 되었습니다.

int main()
{
	std::list<int> s = { 1,2,3,4,5,6,7,8,9,10 };

	// C++98 : 기술적인 문제로 "컨테이너 버전"을 만들수 없었습니다
	// std::sort(first, last)  // 1
	// std::sort(container)    // 2
	// std::sort(container, compare객체) //3. 컨테이너 버전에 비교객체전달
	// 1, 3 번의 함수 템플릿 모양이 동일합니다.
	// => 그래서 만들수 없었습니다.
	auto ret1 = std::find(s.begin(), s.end(), 3);	// ok
//	auto ret2 = std::find(s, 3);					// error

	// C++20 : concept 이라는 문법이 도입되어서 위 문제가 해결되었습니다
	// => std::ranges 라는 namespace 에
	// => 새로운 find 를 제공하기로 결정.. 
	auto ret3 = std::ranges::find(s.begin(), s.end(), 3);	// ok
	auto ret4 = std::ranges::find(s, 3);					// ok

}
// vs 설정에서 C++20 사용으로 맞춰주세요.