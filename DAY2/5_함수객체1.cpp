// 3_함수객체1
#include <iostream>
// function object
// => () 연산자 함수를 제공해서 함수 처럼 사용가능한 객체

// 왜?? 일반 함수를 만들면 되는데, 함수 객체를 사용하나요 ?

// 장점이 너무 많습니다
// => 상태를 가지는 함수, closure!
// => 특정 상황에서 일반 함수보다 함수객체가 빠릅니다.


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
