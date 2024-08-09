#include <list>
#include <chrono>
#include <iostream>

void ex1()
{
	std::list<int> s;

	for (int i = 0; i < 100000; i++) // 0 5개
		s.push_back(i);
}

int main()
{
	stop_watch sw; // 만들어 봅시다.
	ex1();
}