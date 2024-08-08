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

	std::shared_ptr<Point> sp1(p); // 절대 사용하지 마세요!!


	std::shared_ptr<Point> sp2( new Point(1, 2) ); // 사용해도 되지만
									// 최선은 아님


	std::shared_ptr<Point> sp3 = std::make_shared<Point>(1,2);
									// 최선의 코드!! 권장.!!
}


