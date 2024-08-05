#include <iostream>
#include <list>   
#include <vector>

int main()
{
//	std::list<int> s = { 1,2,3,4,5 };
//	std::vector<int> s = { 1,2,3,4,5 };
	int s[] = {1,2,3,4,5};

	// 반복자를 꺼내는 법

	// #1. C++98 시절 방법
	// 단점 : 컨테이너 변경시 아래 왼쪽 코드는 변경되어야 합니다.
	// => 반복자 타입이름을 직접 사용하지 마세요
	// std::list<int>::iterator p1 = s.begin();

	// #2. C++11 이후 auto 권장
	// 장점 : 컨테이너 변경해도 좌변 변경안됨
	// 단점 : s가 배열이라면 에러
//	auto p2 = s.begin();


	// #3. 멤버 함수 begin 이 아닌 일반 함수 begin 사용

	auto p2 = std::begin(s); // s가 배열이라도 ok.
							 // 이 경우 p2 는 int*
}






