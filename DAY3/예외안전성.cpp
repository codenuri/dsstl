// 예외안전성
template<typename T> class stack
{
public:
	void push(T& e) {}
	T pop() {}	// 제거하면서 반환한다고 가정.
};
// stack  : 라이브러리 클래스
// Person : 사용자 클래스
int main()
{
	Person p;

	stack<Person> s;
	s.push(p);

	try
	{
		Person p2 = s.pop(); // 이 한줄에 대해서 생각해 봅시다.
							// 1. 스택에서 제거하고
							// 2. 요소 반환  
							// => 이순간 복사 생성자 호출
							// => 복사 생성자에서 예외가 나오면

							// 발생된 예외를 처리했지만
							// stack s 는 계속 사용할수 있을까 ?

		// 제거하고, 반환하지 말고
		// 반환하고, 제거해야 안전하다.
		Person p2 = s.top(); // 반환만. 예외 나와도 stack 에 남아있다
		s.pop();	// 제거만
	}
	catch (...)
	{
	}
}
// 예외 안전성(exception safety)

// 완벽보장 : 예외가 없다.

// 강력보장 : 예외가 발생해도, 예외를 잡으면, 자원 누수는 없다.
//			 객체는 예외 이전상태를 보장한다. 
//			 계속 사용가능

// 기본 보장 : 예외가 발생해도, 예외를 잡으면, 자원 누수는 없다.
//			  객체의 상태는 알수 없다. 사용할수 없다.


// STL 은 "강력보장"이 목표!!
// => 그래서, 제거와 반환은 분리되어야 한다.!!