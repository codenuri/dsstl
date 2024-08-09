#include <iostream>
#include <thread>
#include <future> 
#include <chrono>
using namespace std::chrono;
using namespace std::literals;


// 방법 #1. out parameter 사용

void Add(int a, int b, int& s)
{
	std::this_thread::sleep_for(5s);
	s = a + b;
}

int main()
{
	int ret = 0;

	std::thread t(&Add, 1, 2, std::ref(ret) );

	t.join();

	std::cout << "결과 : " << ret << std::endl;
}


