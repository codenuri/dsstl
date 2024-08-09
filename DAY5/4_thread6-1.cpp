#include <iostream>
#include <thread>
#include <atomic>


//int x = 0; // 전역변수. 모든 스레드가 공유

std::atomic<int> x = 0;

void foo()
{
	x.fetch_add(1); // "lock inc x" 등의 명령으로 구현

	++x; // 위와 동일

}

int main()
{
	std::thread t1(&foo);
	std::thread t2(&foo);
	t1.join();
	t2.join();
}