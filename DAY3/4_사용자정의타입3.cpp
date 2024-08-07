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

	// �����̳ʿ� ��κ��� Ÿ���� �����Ҽ� ������
	
	// Ư�� �˰����� ����Ϸ���
	// => �˰����� �䱸�ϴ� ������ �����ؾ� �մϴ�.

//	std::sort(v.begin(), v.end()); // error
								   // Point �� < ������ �ȵ˴ϴ�.

	// �ذ�å #1. �� �Լ� ����
	std::sort(v.begin(), v.end(), 
		[](const Point& p1, const Point& p2) { return p1.x < p2.x; });
}




