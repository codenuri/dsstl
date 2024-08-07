#include <stack>
#include <iostream>
#include "show.h"

int main()
{
	std::stack<int> s;

	s.push(10); // A

	// 위 코드는 내부적으로 "std::deque" 를 사용합니다.
	// 1. std::vector 로 변경해 보세요
	// 2. allocator 변경해 보세요
}