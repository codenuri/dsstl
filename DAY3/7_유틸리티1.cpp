#include <iostream>
#include "show.h"

template<typename T, typename U>
struct pair
{
	T first;
	U second;
	// 생성자등이 있습니다.
};
int main()
{
	// pair : 서로다른 타입 2개를 보관하는 구조체
	std::pair<int, double> p1(1, 3.4);

	std::cout << p1.first  << std::endl;
	std::cout << p1.second << std::endl;

	// pair 객체를 쉽게 만들수 있는 make_pair 제공
	auto p2 = std::make_pair(1, 3.4);


	// C++17 부터는 타입 생략가능
	std::pair p3(1, 3.4);
}


