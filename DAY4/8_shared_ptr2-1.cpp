#include <iostream>
#include <memory>

struct Point
{
	int x, y;
	Point(int a = 0, int b = 0) : x(a), y(b) {}
};

int main()
{
	Point* p = new Point(1, 2);

	std::shared_ptr<Point> sp1(p); // ���� ������� ������!!


	std::shared_ptr<Point> sp2( new Point(1, 2) ); // ����ص� ������
									// �ּ��� �ƴ�


	std::shared_ptr<Point> sp3 = std::make_shared<Point>(1,2);
									// �ּ��� �ڵ�!! ����.!!
}


