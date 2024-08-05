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
	T::value * p;
	T::DWORD * p1;
}

int main()
{
	Test t;
	foo(t);
}