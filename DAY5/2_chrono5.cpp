#include <list>
#include <chrono>
#include <iostream>

void ex1(int arg)
{
	std::list<int> s;

	for (int i = 0; i < 100000; i++) // 0 5��
		s.push_back(i);
}

class stop_watch
{
	std::chrono::system_clock::time_point start;

public:
	stop_watch()
	{

	}

	~stop_watch()
	{

	}
};

int main()
{
	stop_watch sw; // ����� ���ô�.
	ex1(0);
}