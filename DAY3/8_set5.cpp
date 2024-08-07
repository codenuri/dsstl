#include "show.h"
#include <set>

struct Point
{
	int x, y;
	Point(int a = 0, int b = 0) : x(a), y(b) {}
};

// Point ��ü 2���� ũ�⸦ ���ϴ� �Լ� ��ü
// => �Լ� ��ü ���鶧 "�ݵ�� �������Լ�" �� �Ǿ�� �մϴ�.
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
	// set �� ����� ���� Ÿ�� �����ϱ�.
	// => ũ�� �񱳰� �����ؾ� �մϴ�.
	// => �� �Լ���ü ���� �����ؾ� �մϴ�.
	std::set<Point, Compare > s;

	s.insert(Point(5, 5)); 
	s.emplace(3, 2); // Point(3, 2)
	s.emplace(2, 1);
	s.emplace(1, 5);
}










