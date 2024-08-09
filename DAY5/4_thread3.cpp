#include <iostream>
#include <thread>
#include <mutex>

// C++ ǥ�� ���ؽ� : 6�� �ֽ��ϴ�.

// lock ���� ���� : 4�� �ֽ��ϴ�.

// C++20 ���� : ��������, ��ġ, �踮��.. 

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
	{
		std::lock_guard<std::mutex> g(mtx);
//		lock_guard<std::mutex> g(mtx); // 1. g �� �����ڿ��� mtx.lock()
										// 2. g �� �Ҹ��ڿ��� mtx.unlock()
										// 3. �Լ� ������ ���ܰ� ���͵�
										//    �������� g �� �����ϰ� �ı� �˴ϴ�.
										//    "stack unwinding" �̶�� ����
										// �ᱹ, �ڿ������� �ִ��� �����ϴ°�
		//	mtx.lock();

		// ���� �ڿ� ���	
		shared_data = 200;

		//	mtx.unlock();

	} // <<===���⼭ unlock 


}




int main()
{
	std::thread t1(&foo);
	std::thread t2(&foo);

	t1.join();
	t2.join();
}

