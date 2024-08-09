#include <iostream>
#include <thread> 

void foo(int n, double d)
{
	std::cout << "foo" << std::endl;
}

class Test
{
public:
	void goo(int n, double d)
	{
		std::cout << "goo" << std::endl;
	}
};

int main()
{
	std::thread t(&foo, 1, 3.4); // 이순간 새로운 스레드 생성되고
								 // foo(1, 3.4) 를 실행합니다.
								 // 별도의 start 함수 필요 없습니다.

	// 스레드를 생성한 경우 반드시 아래 2개중에 한개를 해야 합니다.
	
	t.join();   // 스레드 종료 대기
				// pthread_join()
				
//	t.detach(); // 새로운 스레드를 주스레드와 분리

	// 호출가능한 모든 함수를 스레드로 수행 할수 있습니다

	Test test;
	std::thread t1( &Test::goo, &test, 1, 3.4 ); // 멤버 함수
						// t.goo(1, 3.4)

	std::thread t2( [](int n) { std::cout << "lambda\n"; }, 0 );

	t1.join();
	t2.join();


}


