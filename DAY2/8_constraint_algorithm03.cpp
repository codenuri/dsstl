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
	std::ranges::sort(v,
					  std::greater{},
					 [](const std::string& s) { return s.size(); });

	show(v);


}




