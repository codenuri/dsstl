#include <iostream>
#include <string>
#include <functional>

void foo(int& n) {	n = 100;}

int main()
{
	std::function<void()> f;

	int k = 0;

	// 아래 코드는 k 자체를 bind 하는 것이 아니라 k 의 값을 bind 합니다.
	// => k 자체를  bind 했다면 k 가 파괴된후 호출되는 현상이
	//   발생할수 있습니다

	// 그래서, std::bind 는 "값을 고정" 하는 방식

	f = std::bind(&foo, k);

	f(); // k 자체를 고정했다면 foo(k)
		 // k의 값을 고정했다면 foo(0)

	// 아래 코드의 결과를 예측해 보세요
	std::cout << k << std::endl;
}