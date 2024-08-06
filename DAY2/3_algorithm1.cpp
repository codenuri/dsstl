#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

// 알고리즘 기본
// => 멤버함수가 아닌 일반 함수(템플릿)
// => 대부분 인자로 반복자의 쌍을 요구한다.

int main()
{
	std::vector<int> v = { 1,2,3,1,2,3,1,2,3,1 };
	
	auto p = std::find( v.begin(), v.end(), 3);

}



















//
