#include <iostream>

// #1. ����Ʈ �����ʹ� ���ø����� ����� �˴ϴ�.

template<typename T>
class Ptr
{
	T* obj;
public:
	Ptr(T* p = 0) : obj(p) {}
	T* operator->() { return obj; }
	T& operator*() { return *obj; }
	~Ptr() { delete obj; }
};

int main()
{
	Ptr<int> p1 = new int;
	*p1 = 10;

	Ptr<int> p2 = p1; //!!

}


