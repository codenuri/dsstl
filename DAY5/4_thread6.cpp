#include <iostream>
#include <thread>

// atomic

int x = 0; // 전역변수. 모든 스레드가 공유

void foo()
{
	x = x + 1;

	// 위 한줄은 아래 3줄의 기계어 입니다.
	__asm
	{
		mov eax, x
		add eax, 1
		mov x, eax 
	}

	// 방법 #1. mutex 등으로 동기화
	// => 단순 연산을 위해 mutex 사용은 오버헤드가 크다.
	mutex.lock();
	x = x + 1;
	mutex.unlock();

	// 방법 #2. CPU 가 제공하는 기능 사용
	// => 기계어를 다른 것 사용
	// lock : 인텔CPU 명령중, 한개의 CPU 가 사용하는 메모리를
	//		 다른 CPU 가 접근할수 없게 하는 명령어. 
	__asm
	{
		lock inc x
 	}
}

int main()
{
	std::thread t1(&foo);
	std::thread t2(&foo);
	t1.join();
	t2.join();
}