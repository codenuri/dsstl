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
	std::vector<Point> v;

	v.emplace_back(1, 2); // Point(1,2)
	v.emplace_back(2, 3); // Point(2,3)
	v.emplace_back(3, 2);
	v.emplace_back(0, 1);

	// 컨테이너에 대부분의 타입을 저장할수 있지만
	
	// 특정 알고리즘을 사용하려면
	// => 알고리즘이 요구하는 조건을 만족해야 합니다.

//	std::sort(v.begin(), v.end()); // error
								   // Point 는 < 연산이 안됩니다.

	// 해결책 #1. 비교 함수 전달
	std::sort(v.begin(), v.end(), 
		[](const Point& p1, const Point& p2) { return p1.x < p2.x; });
}




