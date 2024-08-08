#include <iostream>
#include <memory>


void* operator new(std::size_t sz)
{
	std::cout << "new : " << sz << std::endl;
	return malloc(sz);
}

struct Point
{
	int x, y;

	Point(int a = 0, int b = 0) : x(a), y(b) {}
};

int main()
{
	// 아래 코드는 동적 메모리 할당을 몇번하게 될까요 ?
	// => 2번
	// => 1. 사용자 코드인 "new Point"
	// => 2. shared_ptr의 생성자에서 "new control_block"
	std::shared_ptr<Point> sp( new Point(1, 2) );
	
	
}




void foo( std::shared_ptr<Point> sp, int n) {}

int goo() { return 10; }

