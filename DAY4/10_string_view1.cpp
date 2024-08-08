#include <iostream>

// 문자열 배열 vs 문자열 포인터

int main()
{
	// 아래 2줄의 차이점을 생각해 보세요. 
	// => 문자열이 있는 메모리 위치
	// 
	// #1. 메모리 구조
	char sa[] = "hello";

//	char* sp  = "hello"; // C 는 ok. C++ 은 에러
	const char* sp = "hello"; // C++ 도 ok

	*sa = 'a'; // ok
//	*sp = 'a'; // runtime error. 상수메모리에 쓰기
				// const char* 인 경우는 컴파일 에러.

	// #2. 문자열 공유
	char sa1[] = "hello";
	char sa2[] = "hello";

	const char* sp1 = "hello";
	const char* sp2 = "hello";

	printf("%p\n", sa1);
	printf("%p\n", sa2); // sa1 과 다른 주소
	printf("%p\n", sp1);
	printf("%p\n", sp2); // sp1과 동일주소
	
	
}