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
		*(p + i) = 0; // 이순간의 성능을 생각해 봅시다.
						// i 가 1,2,3,4,5... 일때 모두
						// 처음부터 차례대로 이동하게 됩니다.
						// 성능이 아주 나쁘게 됩니다.

		s[i] = 0; // 같은 이유로 [] 연산도 안됨.
	}

	// 현재 위 코드는 모두 에러 입니다.
}