#include <iostream>

// #1. 아래 헤더에 수십개의 traits 가 있습니다 C++11 부터 사용가능
#include <type_traits>

template<typename T> void foo(const T& b)
{
	// #2. 조사 : std::is_ 로 시작
	bool b1 = std::is_pointer<T>::value;
	bool b2 = std::is_pointer_v<T>;  // C++17 에서 도입


	// #3. 변형된 타입 얻기
	typename std::remove_pointer<T>::type n;
	std::remove_pointer_t<T> n1; // 위와 동일 - C++14 부터

//	std::add_
}

// C++14 부터 remove_pointer 등을 쉽게 사용하기 위한 별명 도입
template<typename T>
using remove_pointer_t = typename std::remove_pointer<T>::type;




int main()
{
	int n = 10;

	printv(n);
	printv(&n);
}

