#include <iostream>
#include <thread>
#include <future> 
#include <chrono>
using namespace std::chrono;
using namespace std::literals;

// promise & future

// 일반 함수 : 반환 값으로 결과를 알려 줍니다
// => 하지만, 아래 Add 를 스레드로 수행하면 
//    주스레드에서 결과를 얻을수 없습니다.
// => 다양한 방법을 생각해 봅시다.
int Add(int a, int b)
{
	std::this_thread::sleep_for(5s);

	return a + b;
}

int main()
{
	std::thread t(&Add, 1, 2);
						
	t.join();
}


