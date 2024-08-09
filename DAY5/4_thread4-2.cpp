#include <iostream>
#include <thread>
#include <future> 
#include <chrono>
using namespace std::chrono;
using namespace std::literals;


// 방법 #2. promise & future 기술 사용
// => 스레드간 연산의 결과를 전달하기 위한
// => C++ 표준 방식


// promise future 는 1회용입니다.
// 
// 여러번 통신 하려면 
// => std::condition_variable 로 직접 구현해야 합니다.
// => 복잡한 코드가 됩니다.


void Add(int a, int b, std::promise<int>& p )
{
	try
	{
		std::this_thread::sleep_for(5s);

		p.set_value(a + b); // 연산의 결과(int 값)을 주스레드에게!
	}
	catch (...)
	{
		// 위 블럭안에서 발생한 예외를 주스레드 쪽으로 전달도 가능
		p.set_exception(std::current_exception());
	}
	// ......
}

int main()
{
	// #1. 약속객체를 만들고, 미래의 결과를 가진 future 을 얻어냅니다.
	std::promise<int> p;

	std::future<int> ft = p.get_future();

	// #2. 스레드 생성시 "promise" 를 참조로 전달

	std::thread t(&Add, 1, 2, std::ref(p));

	// 주스레드는 다른 작업을 하다가 결과가 필요 할때
	
	std::cout << "main 다른작업 " << std::endl;
	
	// future 에서 꺼내면 됩니다.

	int ret = ft.get(); // 결과가 있으면 즉시 꺼내고
						// 없으면 대기 합니다.
						// ft.wait_for()

	std::cout << "결과 : " << ret << std::endl;


	t.join(); // 스레드 자체의 종료의 대기


}


