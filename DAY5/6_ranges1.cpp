#include <iostream>
#include <vector>
#include <algorithm>


int main()
{
	std::vector<int> v = { 1,2,3,7,8,9,4,5,6,10 };


	for (auto e : v)
	{
		std::cout << e << ", ";
	}

	// 위 for 문의 정확한 원리
	// => 컴파일러가 위 코드를 아래 처럼 변경합니다.

	auto first = v.begin();
	auto last  = v.end();

	for (; first != last; ++first)
	{
		auto e = *first;
		//---------------------------------
		std::cout << e << ", ";
	}

}