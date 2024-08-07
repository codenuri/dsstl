#include "show.h"
#include <set>

struct Point
{
	int x, y;
	Point(int a = 0, int b = 0) : x(a), y(b) {}
};

struct Compare
{
	bool operator()(const Point& p1, const Point& p2) const
	{
		return p1.x < p2.x;
	}
};

/*
template<typename T>
class less
{
public:
	bool operator()(const T& p1, const T& p2) const
	{
		return p1 < p2;
	}
};
*/


// std::less 의 template 인자가 Point 일때
// 구현을 변경하겠다는 코드
// => 템플릿 특수화
template<> 
class std::less<Point>
{
public:
	bool operator()(const Point& p1, const Point& p2) const
	{
		return p1.x < p2.x;
	}
};

int main()
{
	std::set<Point> s;
//	std::set<Point, std::less<Point>  > s;
					// 그런데, less 는 < 로 비교
					// Point 는 < 연산 안됨.

	s.insert(Point(5, 5));
	s.emplace(3, 2); 
	s.emplace(2, 1);
	s.emplace(1, 5);
}










