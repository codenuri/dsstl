#include <iostream>

class Point
{
	int x = 0;
public:

	// �����Ϸ��� �⺻ ���� ������ �޶�
	auto operator<=>(const Point& other) = default;
};

int main()
{
	Point p1, p2;

	p1 < p2;
	p1 > p2;
	p1 == p2;
	p1 != p2;
	p1 <= p2;
	p1 >= p2;
}
