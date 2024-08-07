#include <tuple>
#include <iostream>

int main()
{
	// pair : C++98. 서로 다른 타입의 객체 2개 보관
	std::pair<int, double> p1(3, 3.4);

	// pair 에 3개 보관가능합니다
	std::pair<int, std::pair<double, char>> p2(1, { 3.4, 'A' } );

	std::cout << ? << std::endl; // 'A' 출력해 보세요
}