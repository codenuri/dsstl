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

// 클래스 템플릿을 직접 사용하면 C++17 이전에는 반드시 타입인자를
// 전달해야 합니다.
// 그런데, 타입인자가 복잡해 보일때가 있습니다.
// 그럴때는 아래 처럼 함수 템플릿을 도입하면 편리합니다.

template<typename T>
list<T> make_list(int sz, T value)
{
	return list<T>(sz, value);
}


int main()
{
	// 다음중 사용하기 편리해 보이는 것은 ?
	square<int>(3);	// 이 코드가 정확한 표기법. 타입인자를 전달하는 코드
	square(3);		// 타입인자 생략시, 함수 인자를 보고
					// 컴파일러가 타입 결정


	list<int> s1(10, 3);	// 타입인자를 전달. 

//	list s2(10, 3);	// 타입인자를 생략. 생성자를 통해서 추론 ?
					// C++17 부터 가능.
					// C++14 까지는 안됨.

	auto s3 = make_list(10, 3);
}
