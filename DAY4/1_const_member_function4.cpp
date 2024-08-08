class Point
{
	int x, y;
public:
	Point(int x, int y) : x(x), y(y) {}

	// ��� �Լ��� "���������� ��� ����Ÿ�� �������� ���� ����"
	// "�ݵ�� const member function" �̾�� �մϴ�.

	// �Ʒ� ó�� ==, !=, < ���� �����������ǵ� ��� const ��� �Լ�
	bool operator==(const Point& other) const 
	{
		return x == other.x && y == other.y;
	}
};

void foo(const Point& p1, const Point& p2)
{
	bool b = (p1 == p2); // p1.operator==(p2)
}

int main()
{
	Point p1(1, 1);
	Point p2(2, 2);

	if ( p1 == p2 ) // p1.operator==(p2)
	{
	}

	foo(p1, p2);
}




