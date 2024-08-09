#include <iostream>
#include <chrono>

// duration 정의 : 특정 단위의 갯수(tick count)를 표현하는 자료구조
// 
//				   값하나을 보관하고, 
//				   템플릿 인자로 값의 타입과 단위를 전달 받는 자료 구조
// 
//				  10초 => 1초의 10개
//					   => 1/1000초의 10000개..

int main()
{
	// 1. duration 사용
	std::chrono::duration<int, std::ratio<1, 100>>  d1(2); // 1/100 * 2
	std::chrono::duration<int, std::ratio<1, 1000>> d2(d1);

	std::cout << d2.count() << std::endl; // 20


	using Meter      = std::chrono::duration<int, std::ratio<1, 1>>;
	using CentiMeter = std::chrono::duration<int, std::ratio<1, 100>>;
//	using KiloMeter  = std::chrono::duration<int, std::ratio<1000,1>>;

	using KiloMeter = std::chrono::duration<int,  std::kilo >;
											// chrono1.cpp 아래소스

	KiloMeter km(1);
	Meter m(km);
	CentiMeter cm(m);

	std::cout << m.count() << std::endl; // 1000
	std::cout << cm.count() << std::endl; // 100000

	Meter m2(1230);
//	KiloMeter km2 = m2; // error. 데이타 손실 발생

	KiloMeter km2 = std::chrono::duration_cast<KiloMeter>(m2);


	using seconds = std::chrono::duration<int, std::ratio<1, 1>>;
	using minutes = std::chrono::duration<int, std::ratio<60, 1>>;
}
