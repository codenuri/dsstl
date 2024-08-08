#include <iostream>

// #1. 스마트 포인터는 템플릿으로 만들게 됩니다.

// #2. 얕은 복사 문제를 해결해야 합니다.
// => 다음 소스에서 해결

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

	Ptr<int> p2 = p1;	// 컴파일러가 제공하는 복사 생성자 사용
						// Shallow Copy(얕은 복사) 문제 발생
					  

}


