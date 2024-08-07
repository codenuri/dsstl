#include <vector>
#include <algorithm>
#include "show.h"

class Point
{
public:
	int x, y;

	Point(int a = 0, int b = 0) : x(a), y(b) {}

	void dump() const { std::cout << x << ", " << y << std::endl; }

	// C++98 ��Ÿ��
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

	// C++20 ��Ÿ��
	// ==, !=, <, >, <=, >= ��� ��밡��. 
	auto operator<=>(const Point& other) const = default;

};

int main()
{
	std::vector<Point> v;

	v.emplace_back(1, 2); // Point(1,2)
	v.emplace_back(2, 3); // Point(2,3)
	v.emplace_back(3, 2);
	v.emplace_back(0, 1);
	
	// �ذ�å #3. Point Ÿ�� ��ü�� "<" �� "==" �����ڸ� �����ϸ�˴ϴ�.
	
	std::sort( v.begin(), v.end() );

}




