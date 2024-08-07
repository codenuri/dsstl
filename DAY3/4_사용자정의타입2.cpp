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

	// 실행결과 예측해 보세요
	// 
	// 1. 객체를 생성후 넣기.
//	Point pt(1, 2);
//	v.push_back(pt); 

	// 2. 임시객체 형태로 전달해서 넣기
//	v.push_back( Point(1, 2) );


	// 3. 객체를 만들어서 전달하지 말고
	//    객체를 만들기 위한 생성자 인자를 전달하자!! 핵심!!!

	v.emplace_back(1, 2);
			// emplace_back 안에서 내부적으로
			// new Point(1,2) 로 버퍼에 생성!!


	std::cout << "------------------" << std::endl;	
}










