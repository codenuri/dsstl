#include <iostream>
#include <chrono> // 시간, 날짜 관련 라이브러리. C++11 
				  // 대부분의 클래스는 std::chrono namespace 안에 있습니다
#include <thread>

int main()
{
	// 1. predefined typedef
	std::chrono::hours		 h(1);     // typedef duration<int, ratio<3600,1>> hours;
	std::chrono::minutes      m  = h;
	std::chrono::seconds      s  = h;
	std::chrono::milliseconds ms = h;
	std::chrono::microseconds us = h;
	std::chrono::nanoseconds  ns = h;

	std::cout << h.count() << std::endl;
	std::cout << m.count() << std::endl;
	std::cout << s.count() << std::endl;
	std::cout << ms.count() << std::endl;
	std::cout << us.count() << std::endl;
	std::cout << ns.count() << std::endl;

	// 2. literals( h, min, s, ms, us, ns )

	std::chrono::seconds sec = 1min; // minutes operator""min(1)

	sec = 1min + 3s;
	sec += 40s;
	std::cout << sec.count() << std::endl; // 103

	std::chrono::seconds sec2 = 1min + 3s;
	std::cout << sec2.count() << std::endl; // 43
}