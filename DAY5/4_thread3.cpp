#include <iostream>
#include <thread>
#include <mutex>

int shared_data = 10;

std::mutex mtx;


void foo()
{
	mtx.lock();

	// ���� �ڿ� ���	
	shared_data = 200;

	mtx.unlock();
}

int main()
{
	std::thread t1(&foo);
	std::thread t2(&foo);

	t1.join();
	t2.join();
}

