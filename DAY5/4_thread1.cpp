#include <iostream>
#include <thread> // C++11 부터 지원하는 헤더
#include <chrono>
using namespace std::literals;

// this_thread namespace 
// => 4개의 유틸리티성 함수 제공

int main()
{
	std::cout << std::this_thread::get_id() << std::endl;

//	std::this_thread::sleep_for(시간); // 시간 동안 재우기
//	std::this_thread::sleep_until(시간); // 시간 까지 재우기


	std::this_thread::sleep_for(3s); 

	std::this_thread::yield(); // 현재 스레드의 나머지 실행시간 포기
}


