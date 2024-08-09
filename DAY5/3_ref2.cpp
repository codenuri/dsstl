#include <iostream>
#include <functional>

// C++ 표준의 std::reference_wrapper<int> 의 원리를 생각해 봅시다

template<typename T> 
class my_reference_wrapper
{
	T* obj;
public:
	my_reference_wrapper(T& r)
		: obj(&r) {}

	// 변환 연산자 : 객체가 다른 타입으로 변환될때 호출되는 함수
	// int& r3 = r1; // r1.operator int&() 호출. 즉 아래 함수 호출
	operator T& () { return *obj; }
};

int main()
{
	int n1 = 10;
	int n2 = 20;

	my_reference_wrapper<int> r1 = n1;
	my_reference_wrapper<int> r2 = n2;

	r1 = r2;	

	// raw reference 와 호환되게 만들어 봅시다.
	int& r3 = r1; // r1.operator int&() 함수를 찾게 됩니다.


	std::cout << n1 << std::endl; 
	std::cout << n2 << std::endl; 

	// my_reference_wrapper 타입은 기본적으로 cout 으로 출력 안됩니다.
	// => 이경우, 컴파일러는 cout 으로 출력가능한 타입으로 변환될수 있는지
	//    찾게 됩니다.
	// => int& 로 변환 가능한데, int& 타입을 출력 가능합니다

	// 즉, "cout << r1.operator int&() " 로 실행됩니다.

	std::cout << r1 << std::endl; 
	std::cout << r2 << std::endl; 
}

