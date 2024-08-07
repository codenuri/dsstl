#include "show.h"
#include <set>

struct Point
{
	int x, y;
	Point(int a = 0, int b = 0) : x(a), y(b) {}
};

int main()
{
	// set 에 사용자 정의 타입 보관하기.
	// => 크기 비교가 가능해야 합니다.
	// => 비교 함수객체 만들어서 전달해야 합니다.
	std::set<Point> s;

	s.insert(Point(5, 5)); 
	s.emplace(3, 2); // Point(3, 2)
	s.emplace(2, 1);
	s.emplace(1, 5);
}










