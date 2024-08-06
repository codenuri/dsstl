// lambda1.cpp - 함수객체8.cpp 복사
#include <iostream>
#include <algorithm>
#include <vector>
#include <functional> 

int main()
{
	std::vector<int> v = { 1,3,5,7,9,2,4,6,8,10 };

	std::sort(v.begin(), v.end(), [](int a, int b) {return a < b; });



}









