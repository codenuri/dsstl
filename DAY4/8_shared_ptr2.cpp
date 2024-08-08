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

//	std::shared_ptr<Point> sp( new Point(1, 2) );

	// 스마트 포인터를 사용할때 대상객체(Point)를 직접 "new" 하지말고
	// std::make_shared 를 사용하세요

	// std::make_shared 가 하는 일
	// 1. sizeof(Point) + sizeof(control block)을 한번에 메모리 할당
	// 2. Point 부분은 1, 2 로 생성자 호출해서 초기화
	// 3. shared_ptr을 생성해서 반환 
	std::shared_ptr<Point> sp = std::make_shared<Point>(1, 2);

	
	
}








void foo( std::shared_ptr<Point> sp, int n) {}

int goo() { return 10; }

