// ����� ������ �и�

//-------------------------------
// Point.h
class Point
{
	int x, y;
public:
	void print();
};

//----------------------------------
// Point.cpp
#include "Point.h"
void Point::print()
{
	std::cout << x << ", " << y << std::endl;
}

//---------------------------------
// main.cpp
#include "Point.h"

int main()
{
	Point p;
	p.print();
}