#include <iostream>

void foo(int& a) { a = 200; }

template<typename F, typename T>
void forward(T arg)
{
	foo(arg);
}

int main()
{
	int n = 10;

	// 목표 : forward 사용해서 n 을 foo 까지 복사본 없이 전달해 봅시다.
//	forward(n); // 실패, 복사본 생성

//	forward(&n); // 주소로 전달. 
				// 1. forward 에서 복사본 생성안됨
				// 2. int* arg 로 n의 주소를 받음..
				// 3. 그런데, int* => int& 에 전달될수 없으므로 에러. 

//	std::reference_wrapper<int> r(n); // 1. r 은 n 의 주소를 보관
									  // 2. r 은 int& 로 변환도 가능
//	forward(r);


	forward( std::ref(n) ); // 위 2줄과 동일
							// std::ref 는 reference_wrapper 를 만들어주는
							// 함수 ( object generator 패턴)


	std::cout << n << std::endl;  
}


// std::reference_wrapper 의 의미!!

// "call by value" 로 설계되어 있는 도구(함수)를 사용할때

// 인자를 reference 로 전달할때 사용

// 쉽게 사용하게 위해서 "std::ref()" 제공