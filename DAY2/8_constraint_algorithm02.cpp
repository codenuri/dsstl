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
	
//	std::sort( v.begin(), v.end() );
				// => "<" 연산으로 정렬
				// => 사전순서로 정렬

	// 문자열의 갯수를 기준으로 정렬해 보세요

	// C++98 : 비교 함수의 인자가 2개 이다.
	std::sort(v.begin(), v.end(), 

			[](const std::string& s1, const std::string& s2) 
			{ return s1.size() < s2.size(); } );

	// PYTHON : 비교 함수의 인자가 한개 이다.
	// => 2개의 요소를 비교할때
	// => 비교함수(1st) < 비교함수(2nd) 로 비교

	/*
	std::sort(v.begin(), v.end(),
		[](const std::string& s) { return s1.size(); } );
	*/

	// C++20 : 위 2개 개념을 합쳐서 설계 했습니다.
	// => 다음 소스에서



	show(v);
}




