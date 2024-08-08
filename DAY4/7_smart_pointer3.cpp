#include <iostream>

class Car
{
public:
	void Go() { std::cout << "Go" << std::endl; }
	~Car()    { std::cout << "~Car" << std::endl; }
};
// 개념 : 객체가 다른 타입의 포인터 처럼 사용되는 것
// 원리 : 
// 장점 : 

// 아래 Ptr 이 핵심입니다.
class Ptr
{
	Car* obj;
public:
	Ptr(Car* p = 0) : obj(p) {}

	Car* operator->() { return obj; }
};

int main()
{
	Ptr p = new Car; // Ptr p( new Car ) 로 생각하세요

	p->Go();	// (p.operator->())Go() 의 형태이지만
				// (p.operator->())->Go() 로 해석됩니다.

	(*p).Go();
}


