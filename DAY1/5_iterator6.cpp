#include <iostream>
#include <list>
#include <algorithm>

int main()
{
	std::list<int> s1 = { 1, 2, 3, 4, 5 };
	std::list<int> s2 = { 0, 0, 0, 0, 0 };

	// s1의 모든 요소를 s2에 복사해 보세요
	// 
	// #1. [] 연산자와 for 문 - list 는 안됩니다.
	for (int i = 0; i < 5; i++)
	{
//		s2[i] = s1[i];	// error. list 는 [] 연산 안됨
						// vector 만 [] 연산 가능
						// 이유는 3일차에
	}

	// #2. 반복자로 해야 합니다.
	auto p1 = s1.begin();
	auto p2 = s1.end();
	auto p3 = s2.begin();

	while (p1 != p2)
	{
		*p3 = *p1;
		++p1;
		++p3;
	}

	// #3. std::copy 알고리즘 - 앞으로 수업시간에 계속 사용합니다
	// => std::copy 가 내부적으로 위처럼 구현됨.
	std::copy( s1.begin(), s1.end(), s2.begin() );
}











