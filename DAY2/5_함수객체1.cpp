// 3_함수객체1
#include <iostream>

struct Plus
{
	int operator()(int a, int b)
	{
		return a + b;
	}
};

int main()
{
	Plus p; // p 는 함수가 아닌 plus 라는 타입의 객체 입니다.

	int n = p(1, 2); // 객체인 p를 함수처럼 사용합니다.
					 // => 함수객체(function object) 라고 합니다.
				
	int n2 = p.operator()(1, 2); // 이렇게 직접 호출해도 됩니다.

	// a + b; // a.operator+(b)
	// a - b; // a.operator-(b)
	// a();   // a.operator()()
	// a(1,2);// a.operator()(1,2)
}
