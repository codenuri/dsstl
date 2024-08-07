#include <iostream>

class Point
{
	int x = 0;
	int y = 0;
public:

	// �����Ϸ��� �⺻ ���� ������ �޶�
	auto operator<=>(const Point& other) const = default;

	// �����Ϸ��� ����� �ڵ�
	/*
	auto operator<=>(const Point& other) const
	{
		auto ret = x <=> other.x;

		if (ret == 0)
			return y <=> other.y;
		
		return ret;
	}
	*/
};

int main()
{
	Point p1, p2;

	// ������ڵ�	// �����Ϸ��� ������ �ڵ�(rewrite expression)
	p1 < p2;		// (p1 <=> p2) < 0
	p1 > p2;		// (p1 <=> p2) > 0
	p1 == p2;		// (p1 <=> p2) == 0
	p1 != p2;
	p1 <= p2;
	p1 >= p2;
}
