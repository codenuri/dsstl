#include <iostream>

class Point
{
	int x = 0;
	int y = 0;
public:

	// 컴파일러가 기본 구현 제공해 달라
	auto operator<=>(const Point& other) const = default;

	// 컴파일러가 만드는 코드
	/*
	auto operator<=>(const Point& other) const
	{
		auto ret = x <=> other.x;

		if (ret == 0)
			return y <=> other.y;
		
		return ret;
	}
	*/
};

int main()
{
	Point p1, p2;

	// 사용자코드	// 컴파일러가 변경한 코드(rewrite expression)
	p1 < p2;		// (p1 <=> p2) < 0
	p1 > p2;		// (p1 <=> p2) > 0
	p1 == p2;		// (p1 <=> p2) == 0
	p1 != p2;
	p1 <= p2;
	p1 >= p2;
}
