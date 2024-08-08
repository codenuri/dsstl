#include <iostream>

class Car
{
public:
	void Go() { std::cout << "Go" << std::endl; }
	~Car()    { std::cout << "~Car" << std::endl; }
};
// 개념 : 객체가 다른 타입의 포인터 처럼 사용되는 것
// 
// 원리 : -> 와 * 를 재정의 해서 포인터 처럼 보이게 한것
// 
// 장점 : raw pointer 가 아닌 객체이다.
//	      생성/복사/대입/파괴 의 모든 과정에서 추가 작업이 가능하다.
//        대표적인 활용이 소멸자에서 "delete" 기능 제공

// 아래 Ptr 이 핵심입니다.
class Ptr
{
	Car* obj;
public:
	Ptr(Car* p = 0) : obj(p) {}

	Car* operator->() { return obj; }

	Car& operator*() { return *obj; }

	~Ptr() { delete obj; }
};

int main()
{
	Ptr p = new Car; // Ptr p( new Car ) 로 생각하세요

	p->Go();	// (p.operator->())Go() 의 형태이지만
				// (p.operator->())->Go() 로 해석됩니다.

	(*p).Go();
}


