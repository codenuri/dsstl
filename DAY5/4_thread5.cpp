#include <iostream>
#include <thread>
#include <future> 
#include <chrono>
using namespace std::chrono;
using namespace std::literals;

// 아래 Add 는 스레드를 고려하지 않은 함수 입니다.
// => promise & future 모델로 변경하려면 코드 수정이 필요 합니다.

// async : 기존 함수의 코드를 수정하지 않고도
//         멀티스레드로 수행후 결과를 얻을때 사용

int Add(int a, int b)
{
	std::this_thread::sleep_for(5s);

	return a + b;
}

int main()
{
	std::future<int> ft = std::async(&Add, 1, 2);

	std::cout << "주스레드는 다른 작업....\n";

	int ret = ft.get();

	std::cout << "결과 : " << ret << std::endl;
}


