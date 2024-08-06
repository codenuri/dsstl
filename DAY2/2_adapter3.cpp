// 2_adapter3.cpp
#include <iostream>
#include <list>
#include <algorithm>

// iterator         : ++ 연산지 => 방향으로 이동
// reverse_iterator : ++ 연산지 <= 방향으로 이동

int main()
{
	std::list<int> s = { 1,2,3,4,5,6,7,3,9,10 };

	auto p = std::next(s.begin(), 3);

	std::reverse_iterator< std::list<int>::iterator > p3(p); 

}
