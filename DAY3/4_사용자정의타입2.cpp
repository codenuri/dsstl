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

// #1. �����̳ʰ� primitive type �� �����ϸ�
// ex) std::vector<int>, std::vector<double>
// 
// => push_back, emplace_back ��� ��������ϴ�. ���ɵ� ���

// #2. �����̳ʰ� user define type �� "��" ���� �����ϸ�
// ex) std::vector<Point>

// v.push_back() ������� ����  v.emplace_back()
// v.push_front()������� ����  v.emplace_front()
// v.insert()    ������� ����  v.emplace()


// #3. �����̳ʰ� user define type �� "������" ���� �����ϸ�
// ex) std::vector<Point*>
// => push_back, emplace_back ��� ��������ϴ�. ���ɵ� ���









