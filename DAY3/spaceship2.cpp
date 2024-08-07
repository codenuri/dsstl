#include <iostream>

class Point
{
	int x = 0;
public:

	// 컴파일러가 기본 구현 제공해 달라
	auto operator<=>(const Point& other) = default;
};

int main()
{
	Point p1, p2;

	p1 < p2;
	p1 > p2;
	p1 == p2;
	p1 != p2;
	p1 <= p2;
	p1 >= p2;
}
