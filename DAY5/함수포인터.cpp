class Sample
{
public:
	void foo(int a) {}
};

int main()
{
	// 멤버 함수의 주소를 담는 방법
	// => 일반 함수 포인터에 클래스 이름을 추가
	void(*f)(int) = &Sample::foo;
}