#include <iostream>
#include <string>		// C++98
#include <string_view>  // C++17 에서 추가

// string      : 문자열 소유
// string_view : 문자열 소유 안함(const char* 와 size 로 구성된 타입)

int main()
{
	std::string s = "to be or not to be";

	// #1. string vs string_view
	std::string      ss1 = s;
	std::string_view sv1 = s;
	
	printf("s   buffer : %p\n", s.data());
	printf("ss1 buffer : %p\n", ss1.data());
	printf("sv1 buffer : %p\n", sv1.data()); // s.data() 와 동일



	// #2. literal 초기화
	std::string      ss2 = "practice make best";
					// => 힙에 메모리를 할당해서
					// => 문자열의 복사본을 생성합니다.
					// => 즉, 문자열 소유

	std::string_view sv2 = "practice make best";
					// => 상수 메모리의 문자열을 가리키게 됩니다.
					// => const char* 입니다.

}