#include <iostream>
#include <string>
#include <string_view>


// 함수 인자로 문자열을 받고 싶습니다.
// 전달 받은 문자열을 읽기만 하면 됩니다.
// => 최선의 코드를 생각해 봅시다.

void f1(std::string s)  {} // bad. 사용하지 마세요.


void f2(const std::string& s) { } // good. 

void f3(std::string_view s) { }   // best - C++17

int main()
{
	std::string s = "to be or not to be";

	// 아래의 경우는 큰 차이가 없습니다.
	f2(s);
	f3(s);

	// 아래의 경우가 핵심입니다.
	f2("to be or not to be");
			// => std::string 의 임시객체가 생성되고
			// => string 생성자에서 문자열도 힙으로 복사
			// => 임시객체가 f2 에 전달됩니다.

	f3("to be or not to be");
			// => 상수 메모리에 있는 문자열을 가리키게 됩니다.
}
