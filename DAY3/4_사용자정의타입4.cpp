#include <vector>
#include <algorithm>
#include "show.h"


class Point
{
public:
	int x, y;

	Point(int a = 0, int b = 0) : x(a), y(b) {}

	void dump() const { std::cout << x << ", " << y << std::endl; }
};

int main()
{
	std::vector<Point*> v;

	v.push_back(new Point(1, 2));
	v.push_back(new Point(3, 1));
	v.push_back(new Point(4, 2));
	v.push_back(new Point(2, 2));

	// #1. v 는 사용자 정의 타입을 보관하지만, 
	// => "값" 이 아닌 "포인터 타입"
//	std::sort( v.begin(), v.end() );
			// => 에러는 아니지만, 
			// => 주소의 크기 비교 이므로 의미 없는 sort

	// 아래 처럼 비교 연산 전달해야 합니다.
	std::sort(v.begin(), v.end(),
		[](const Point* p1, const Point* p2)
		{ return p1->x < p2->x; });


	for (auto p : v) p->dump();
	for (auto p : v) delete p;
}




