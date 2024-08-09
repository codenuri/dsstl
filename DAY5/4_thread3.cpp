#include <iostream>
#include <thread>
#include <mutex>

// C++ 표준 뮤텍스 : 6개 있습니다.

// lock 관리 도구 : 4개 있습니다.

// C++20 부터 : 세마포어, 래치, 배리어.. 

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
//		lock_guard<std::mutex> g(mtx); // 1. g 의 생성자에서 mtx.lock()
										// 2. g 의 소멸자에서 mtx.unlock()
										// 3. 함수 수행중 예외가 나와도
										//    지역변수 g 는 안전하게 파괴 됩니다.
										//    "stack unwinding" 이라는 개념
										// 결국, 자원해지는 최대한 보장하는것
		//	mtx.lock();

		// 공유 자원 사용	
		shared_data = 200;

		//	mtx.unlock();

	} // <<===여기서 unlock 


}




int main()
{
	std::thread t1(&foo);
	std::thread t2(&foo);

	t1.join();
	t2.join();
}

