class Point
{
	int x, y;
public:
	Point(int x, int y) : x(x), y(y) {}
};

void draw_line(const Point& from, const Point& to) {}

int main()
{
	// draw_line �� ����ؼ� (1, 1) ~ (10,10) �� ���� �׷�������

	// #1. ��ü�� �����ؼ� ����.
	Point from(1, 1);
	Point to(10, 10);

	draw_line(from, to);

	// #2. �ӽð�ü ���·� ����
//	draw_line(Point(1, 1), Point(10, 10));
	draw_line(Point{ 1, 1 }, Point{ 10, 10 });

	// �ӽð�ü
	// => �̸��� ���� ��ü
	// => "Ŭ���� �̸�(����������)" ���·� ����� ��ü

	Point p1(1, 1); // named object
	Point (1, 1);   // unnamed object ( �ӽð�ü)
					// => ���� : �ڽ��� ������ ������ ������ �ı�

	// C++11 ���ʹ� ��ü ������ () ��� {} ��밡���մϴ�.
	Point p1{ 1, 1 };
	Point { 1, 1 };
}