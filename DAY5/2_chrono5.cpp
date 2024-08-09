#include <list>
#include <chrono>
#include <iostream>

void ex1(int arg)
{
	std::list<int> s;

	for (int i = 0; i < 100000; i++) // 0 5개
		s.push_back(i);
}

class stop_watch
{
	std::chrono::system_clock::time_point start;
public:
	stop_watch()
	{
		start = std::chrono::system_clock::now();
	}

	~stop_watch()
	{
		std::chrono::system_clock::time_point end = 
								std::chrono::system_clock::now();

		// time_point 끼리 뺄셈을 하면 결과가 nanoseconds 타입으로 나오게됩니다.
		std::chrono::nanoseconds nano = end - start;

		std::cout << nano.count() << std::endl;
	}
};

int main()
{
	stop_watch sw; // 만들어 봅시다.
	ex1(0);
}