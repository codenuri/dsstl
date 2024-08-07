#include "show.h"
#include <set>

struct Point
{
	int x, y;
	Point(int a = 0, int b = 0) : x(a), y(b) {}
};

int main()
{
	// set �� ����� ���� Ÿ�� �����ϱ�.
	// => ũ�� �񱳰� �����ؾ� �մϴ�.
	// => �� �Լ���ü ���� �����ؾ� �մϴ�.
	std::set<Point> s;

	s.insert(Point(5, 5)); 
	s.emplace(3, 2); // Point(3, 2)
	s.emplace(2, 1);
	s.emplace(1, 5);
}










