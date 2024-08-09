class Sample
{
public:
	void foo(int a) {}
};

int main()
{
	// #1. 멤버 함수의 주소를 담는 방법
	// => 일반 함수 포인터에 클래스 이름을 추가
//	void(*f)(int) = &Sample::foo; // error
	void(Sample::*f)(int) = &Sample::foo; // ok

	// #2. 멤버 함수 포인터로 함수 호출하기

//	f(10); // error. 객체가 없다.

	Sample s;
//	s.f(10); // error. s(Sample) 안에서 f 를 찾는다. f는 멤버는 아님.

	// .* : pointer to member operator 라는 연산자
//	s.*f(10); // error
			  // 연산자 우선순위 문제

	(s.*f)(10); // ok.. 

	// f1 : 일반 함수 포인터라고 가정
	// f2 : 멤버 함수 포인터라고 가정

	f1(10);
	(obj.*f2)(10);

	// 일반 함수 포인터와 멤버 함수 포인터를 
	// 동일하게 사용할수 없을까 ?
	// => C++17 std::invoke
	std::invoke(f1, 10);       // 일반함수 포인터로 호출
	std::invoke(f2, &obj, 10); // 멤버함수 포인터로 호출


	chronometry(&foo, 10); // 일반함수포인터 전달
	chronometry(&Sample::foo, &obj, 10); // 일반함수포인터 전달
}