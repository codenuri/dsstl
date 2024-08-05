template<typename T>
T square(T a)
{
	return a * a;
}

template<typename T>
class list
{
public:
	list(int sz, T value) {}
};

int main()
{
	// 다음중 사용하기 편리해 보이는 것은 ?
	square<int>(3);	// 이 코드가 정확한 표기법. 타입인자를 전달하는 코드
	square(3);		// 타입인자 생략시, 함수 인자를 보고
					// 컴파일러가 타입 결정


	list<int> s1(10, 3);	// 타입인자를 전달. 

	list s2(10, 3);	// 타입인자를 생략. 생성자를 통해서 추론 ?
					// C++17 부터 가능.
}
