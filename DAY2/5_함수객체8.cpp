#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>

inline bool cmp1(int a, int b) { return a < b; }

int main()
{
	std::vector<int> v = { 1,3,5,7,9,2,4,6,8,10 };

	// std::sort 사용법

	// #1. 비교 정책을 전달하지 않는 경우
	std::sort( v.begin(), v.end() );


	// #2. 비교정책을 전달하는 경우
}









