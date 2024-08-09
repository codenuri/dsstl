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
		start = std::chrono::system_clock::now();
	}

	~stop_watch()
	{
		std::chrono::system_clock::time_point end = 
								std::chrono::system_clock::now();

		// time_point ���� ������ �ϸ� ����� nanoseconds Ÿ������ �����Ե˴ϴ�.
//		std::chrono::nanoseconds nano = end - start;

//		std::chrono::seconds result =
//			std::chrono::duration_cast<std::chrono::seconds>(end - start);

		// ǥ���� second �� int Ÿ���Դϴ�.
		// ���Ӱ� double Ÿ���� second �� ����� ���ô�.
		using mysecond = std::chrono::duration<double, std::ratio<1, 1>>;
			
		mysecond result = std::chrono::duration_cast<mysecond>(end - start);

		std::cout << result.count() << std::endl;
	}
};

int main()
{
	stop_watch sw; // ����� ���ô�.
	ex1(0);
}