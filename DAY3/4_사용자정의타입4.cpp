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

	// #1. v �� ����� ���� Ÿ���� ����������, 
	// => "��" �� �ƴ� "������ Ÿ��"
//	std::sort( v.begin(), v.end() );
			// => ������ �ƴ�����, 
			// => �ּ��� ũ�� �� �̹Ƿ� �ǹ� ���� sort

	// �Ʒ� ó�� �� ���� �����ؾ� �մϴ�.
	std::sort(v.begin(), v.end(),
		[](const Point* p1, const Point* p2)
		{ return p1->x < p2->x; });


	for (auto p : v) p->dump();
	for (auto p : v) delete p;
}




