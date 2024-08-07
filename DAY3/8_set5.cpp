#include "show.h"
#include <set>

struct Point
{
	int x, y;
	Point(int a = 0, int b = 0) : x(a), y(b) {}
};

// Point 객체 2개의 크기를 비교하는 함수 객체
// => 함수 객체 만들때 "반드시 상수멤버함수" 가 되어야 합니다.
struct Compare
{ 
//	bool operator()(const Point& p1, const Point& p2) // error
	bool operator()(const Point& p1, const Point& p2) const 
	{
		return p1.x < p2.x;
	}
};


int main()
{
	// set 에 사용자 정의 타입 보관하기.
	// => 크기 비교가 가능해야 합니다.
	// => 비교 함수객체 만들어서 전달해야 합니다.
	std::set<Point, Compare > s;

	s.insert(Point(5, 5)); 
	s.emplace(3, 2); // Point(3, 2)
	s.emplace(2, 1);
	s.emplace(1, 5);
}










