#include <iostream>
#include <thread>
#include <future> 
#include <chrono>
using namespace std::chrono;
using namespace std::literals;


// 방법 #1. out parameter 사용
// => 스레드 함수에서 수행한 연산의 결과를 대기하는 것이 아니라
// => 스레드 자체의 종료를 대기하게 된다.
// => 연산 완료시 즉시 알려줄수 없을까 ??

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


