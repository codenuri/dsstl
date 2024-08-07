#include <vector>
#include <algorithm>
#include "show.h"

class Point
{
public:
	int x, y;

	Point(int a = 0, int b = 0) : x(a), y(b) {}

	void dump() const { std::cout << x << ", " << y << std::endl; }

	// C++98 스타일
	/*
	bool operator<(const Point& other) const
	{
		return x < other.x;
	}
	bool operator==(const Point& other) const
	{
		return x == other.x && y == other.y;
	}
	*/

	// C++20 스타일
	// ==, !=, <, >, <=, >= 모두 사용가능. 
	auto operator<=>(const Point& other) const = default;

};

int main()
{
	std::vector<Point> v;

	v.emplace_back(1, 2); // Point(1,2)
	v.emplace_back(2, 3); // Point(2,3)
	v.emplace_back(3, 2);
	v.emplace_back(0, 1);
	
	// 해결책 #3. Point 타입 자체에 "<" 와 "==" 연산자를 제공하면됩니다.
	
	std::sort( v.begin(), v.end() );

}




