#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>
#include <string>
#include <functional>
#include "show.h"

// projection 개념

int main()
{
	std::vector<std::string> v = { "AAAA", "DD", "C", "BBBBB" };

//	std::ranges::sort(v); // 사전순 오름 차순

	// 2항 함수객체 전달 - C++98 과 동일 개념
//	std::ranges::sort(v, std::greater{}); // 사전순 내림 차순
										  // greater<string> 의
										  // 타입생략가능, C++17 부터

	// 2항 함수객체 + Projection 기능
	// 2번째 : 비교함수
	// 3번째 : Projection (인자가 한개인 함수)
	// 2개 문자열을 비교할때 아래 처럼 합니다.
	// => 비교함수( Projection("AA"), Projection("B"))

	std::ranges::sort(v,
					  std::greater{},
					 [](const std::string& s) { return s.size(); });


	// Projection 은 아주 다양한 형태가 가능합니다.
	std::ranges::sort(v,
		std::greater{},
		&std::string::size ); // 1. 멤버 함수 주소 전달
							  // 2. &Point::y  처럼 멤버 변수 주소도 가능
							  // 3. 단항 함수(객체)도 가능

	show(v);


}




