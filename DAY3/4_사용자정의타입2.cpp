#include <vector>
#include "show.h"

class Point
{
	int x, y;
public:
	Point(int a = 0, int b = 0) : x(a), y(b) 
	{
		std::cout << "Point()" << std::endl;
	}
	~Point() { std::cout << "~Point()" << std::endl; }
	
	Point(const Point& p)
	{
		std::cout << "Point(const Point&)" << std::endl;
	}
};
int main()
{
	std::vector<Point> v;

	// ������ ������ ������
	// 
	// 1. ��ü�� ������ �ֱ�.
//	Point pt(1, 2);
//	v.push_back(pt); 

	// 2. �ӽð�ü ���·� �����ؼ� �ֱ�
//	v.push_back( Point(1, 2) );


	// 3. ��ü�� ���� �������� ����
	//    ��ü�� ����� ���� ������ ���ڸ� ��������!! �ٽ�!!!

	v.emplace_back(1, 2);
			// emplace_back �ȿ��� ����������
			// new Point(1,2) �� ���ۿ� ����!!


	std::cout << "------------------" << std::endl;	
}










