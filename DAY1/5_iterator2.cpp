#include <iostream>
#include <list>
#include <filesystem> // C++17 에서 추가

// 반복자 정의 : 반복자처럼 동작하는 모든것은 반복자다. 
//			    ++ 로 이동가능하고, *로 요소 접근이 가능하면 모두 반복자

// 반복자 종류(iterator)
// 1. 컨테이너에서 꺼내는 반복자( c.begin() )
// 2. Raw Pointer 
// 3. 독립적으로 만들어서 사용하는 반복자도 있다( main 참고)

int main()
{
	std::filesystem::directory_iterator p("C:\\windows");

	std::cout << *p << std::endl;
	++p;
	std::cout << *p << std::endl;
}










