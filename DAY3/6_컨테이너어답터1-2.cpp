#include <stack>
#include <iostream>
#include "show.h"

int main()
{
//	std::stack<int> s; // std::stack<int, std::deque<int> > s;

	std::stack<int, std::vector<int, debug_alloc<int>> > s;

	s.push(10); // A

	// �� �ڵ�� ���������� "std::deque" �� ����մϴ�.
	// 1. std::vector �� ������ ������
	// 2. allocator ������ ������
}