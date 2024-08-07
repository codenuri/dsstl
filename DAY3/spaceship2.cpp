#include <iostream>

class Point
{
	int x = 0;
	int y = 0;
public:

	// �����Ϸ��� �⺻ ���� ������ �޶�
//	auto operator<=>(const Point& other) const = default;

	// �����Ϸ��� ����� �ڵ�
	auto operator<=>(const Point& other) const
	{
		auto ret = x <=> other.x;

		if (ret == 0)
			return y <=> other.y;
		
		return ret;
	}

	// <=> �� ����Ʈ ��û�ϸ� : == �ʿ� �����ϴ�.
	// <=> �� ����ڰ� ����� : == �� �ʿ�
	bool operator==(const Point& other) const
	{
		return x == other.x;
	}
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

	std::string s1 = "hello";
	std::string s2 = "hello";
}
