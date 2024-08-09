#include <iostream>
#include <thread>
#include <mutex>

int shared_data = 10;

std::mutex mtx;

template<typename T>
class lock_guard
{
	T& mtx;
public:
	lock_guard(T& m) : mtx(m) { mtx.lock(); }
	~lock_guard()             { mtx.unlock(); }
};

void foo()
{
	lock_guard<std::mutex> g(mtx);
//	mtx.lock();

	// 공유 자원 사용	
	shared_data = 200;

//	mtx.unlock();
}




int main()
{
	std::thread t1(&foo);
	std::thread t2(&foo);

	t1.join();
	t2.join();
}

