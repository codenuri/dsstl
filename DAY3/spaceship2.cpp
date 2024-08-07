#include <iostream>

class Point
{
	int x = 0;
	int y = 0;
public:

	// 컴파일러가 기본 구현 제공해 달라
//	auto operator<=>(const Point& other) const = default;

	// 컴파일러가 만드는 코드
	auto operator<=>(const Point& other) const
	{
		auto ret = x <=> other.x;

		if (ret == 0)
			return y <=> other.y;
		
		return ret;
	}

	// <=> 를 디폴트 요청하면 : == 필요 없습니다.
	// <=> 를 사용자가 만들면 : == 도 필요
	bool operator==(const Point& other) const
	{
		return x == other.x;
	}
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

	std::string s1 = "hello";
	std::string s2 = "hello";
}
