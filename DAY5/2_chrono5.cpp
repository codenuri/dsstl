#include <list>
#include <chrono>
#include <iostream>

void ex1()
{
	std::list<int> s;

	for (int i = 0; i < 100000; i++) // 0 5��
		s.push_back(i);
}

int main()
{
	stop_watch sw; // ����� ���ô�.
	ex1();
}