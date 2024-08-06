       int Add1(int a, int b) { return a + b; }
inline int Add2(int a, int b) { return a + b; }

int main()
{
	int n1 = Add1(1, 2); // 1. 인자를 약속된 장소에 넣고
						 // 2. 함수로 이동 (call Add1)

	int n2 = Add2(1, 2);	// Add2 의 기계어 코드 자체를 이곳에 치환
							// mov eax, 2
							// add eax, 1
							// mov n2, eax
							// => 장점 : 빨라집니다.

	int(*f)(int, int) = &Add2;

//	if (사용자입력 == 1) f = &Add1;

	f(1, 2); // ? 호출
}

// 1. 인라인 치환은 컴파일 시간에 수행되는 문법입니다.

// 2. 인라인 함수라도 함수 포인터 변수에 담아서 호출하면
//    인라인 치환될수 없습니다.

