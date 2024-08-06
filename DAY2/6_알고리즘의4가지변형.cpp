#include <iostream>
#include <vector>
#include <algorithm>
#include "show.h"

int main()
{
	std::vector<int> v1 = { 1,2,3,4,5,6,7,8,9,10 };
	std::vector<int> v2 = { 0,0,0,0,0,0,0,0,0,0 };
	
	// #1. inplace, value 버전
//	auto p1 = std::remove(v1.begin(), v1.end(), 3);


	// #2. inplace, predicator 버전
	// xxx_if 버전 : 마지막 인자가 value 가 아닌 predicator

	auto p2 = std::remove_if(v1.begin(), v1.end(), 
						[](int n) { return n % 3 == 0; };



	show(v1);
	show(v2);
}
