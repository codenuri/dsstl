#include <iostream>
#include <list>
#include <algorithm>

// 조건자(predicator) : bool 을 반환 하는 함수
bool foo(int n) { return n % 3 == 0; }

int main()
{
	std::list<int> s = { 1,2,6,4,5,3,7,8,9,10 };

	
	// 주어진 구간에서 "3" 검색
	auto ret1 = std::find(s.begin(), s.end(), 3);


	// 주어진 구간에서 처음나오는 "3의 배수" 검색
	auto ret2 = std::find_if(s.begin(), s.end(), foo);

	std::cout << *ret2 << std::endl; // 6

	int k = 3;
}

// std::find    : 값   검색, 3번째 인자가 "값"
// std::find_if : 조건 검색, 3번째 인자가 "단항 조건자(unary predicator)"



