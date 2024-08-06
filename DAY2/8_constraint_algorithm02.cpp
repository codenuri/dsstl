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

	std::sort(v.begin(), v.end(), 
			[](const std::string& s1, const std::string& s2) 
			{ return s1.size() < s2.size(); } );


	show(v);
}




