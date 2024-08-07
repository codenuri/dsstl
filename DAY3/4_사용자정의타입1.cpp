#include <vector>
#include "show.h"

// ���� �����̳ʿ� ����� Ÿ���� �����Ҷ� ���� ����

// 1. ���� �����ڰ� �ִ� ��� Ÿ���� ���� �����մϴ�.
// 
// 2. ����Ʈ �����ڰ� ���ٸ�, �����̳� ������ 2��° ���ڷ�
//    "�����ؼ� ����� ��ü" �� �����ϸ� �˴ϴ�.

// 3. �����ʹ� �����Ҽ� ������, reference �� �����Ҽ� �����ϴ�.

class Point
{
	int x, y;
public:
	Point(int a, int b) : x(a), y(b) {}
};

int main()
{
//	std::vector<Point> v(10); // error. 
					// new Point(10) ���� ����Ʈ �����ھ���.

	Point pt(0, 0);
	std::vector<Point> v1(10, pt); // ok. pt �� �����ؼ� ����
	
	std::vector<Point> v2(10, Point(0, 0)); // ok. �ӽð�ü��
}



