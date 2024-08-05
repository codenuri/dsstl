class Test
{
public:
	enum { value = 1 };
	using DWORD = int; // typedef int DWORD
};
int p = 0;

template<typename T> void foo(T a)
{
	// 아래 2줄에서 * 의 의미를 생각해 보세요(1. 곱하기, 2. 포인터 변수 선언)
	Test::value * p;	// 1 * p 이므로 "곱하기" 의미
	Test::DWORD * p;	// int* p 즉, 포인터 변수의 선언

	// "클래스이름::이름" 에서 "이름"
	// 1. 값일수도 있고
	// 2. 타입일수도 있다.

	// 아래 코드 생각해 보세요
	// Dependent name : 템플릿 인자 T에 의존해서 꺼내는 이름
	// => 컴파일러는 기본적으로 "값" 으로 해석합니다.
	T::value * p;
//	T::DWORD * p1; // error. DWORD 를 값으로 해석하는 경우
					// p1 이라는 이름을 알수 없게 된다.

	typename T::DWORD* p1; // dependent name 이
						   // "값"이 아닌 "타입"이라고
							// 알려주는 것
}

int main()
{
	Test t;
	foo(t);
}