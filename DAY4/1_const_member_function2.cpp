#include <iostream>

class Point
{
public:
	int x, y;

	Point(int x, int y) : x(x), y(y) {}

	void set(int a, int b)
	{
		x = a;
		y = b;
	}
	void print() const 
	{
//		x = 10; // error. 상수 멤버 함수에서는 
				// 멤버 데이타 값을 변경할수 없다.

		std::cout << x << ", " << y << std::endl;
	}
};

int main()
{
//	Point p(1, 2);
	const Point p(1, 2); // 상수 객체

	// p 는 상수객체입니다. 아래 3줄을 생각해 봅시다.
	p.x = 10;		// error. x 는 public 이지만, p 가 상수 객체이므로
	p.set(10, 20);	// error
	p.print();		// error
					// 단, print() 가 상수 멤버 함수라면 ok.. 
}

class Test
{
public:
	// 핵심 #1.
	void f1() {}		// non-const member function
						// => 멤버 데이타를 변경할수 있다

	void f2() const {}  // const member function
						// => 멤버 데이타를 변경할수 없다.
};

// 핵심 #2.
// 상수 객체는 "const member function" 만 호출할수 있다.

// 일반 객체는 "모두 호출 가능"하다.