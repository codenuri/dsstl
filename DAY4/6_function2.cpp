#include <iostream>
#include <functional>
using namespace std::placeholders;

int main()
{
	// std::function 에는 "호출가능한 모든것" 을 담을수 있습니다.
	// => 일반 함수,   멤버 함수
	// => 람다 표현식, 함수 객체등

	std::function<int(int, int)> f;

	f = [](int a, int b) { return a + b; };

	std::cout << f(1, 2) << std::endl;



	f = std::multiplies<int>();

	std::cout << f(1, 2) << std::endl;
}