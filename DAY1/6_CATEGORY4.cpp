#include <iostream>
#include <vector>
#include <list>
#include <iterator>

int main()
{
	std::list<int> s = { 1,2,3,4,5,6,7,8,9,10 };

	auto p = s.begin();

	// list 반복자(전진형) 은 + 연산은 안됩니다.
	// 왜 안되는지 생각해 보세요
	// 만일 + 가 된다면 아래 코드의 성능을 생각해보세요

	for (int i = 0; i < s.size(); i++)
	{
		*(p + i) = 0;
	}
}