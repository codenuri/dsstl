#include <iostream>
#include <string>
#include <string_view>
#include <vector>
using namespace std::literals; // 사용자 정의 접미사 사용 (s, sv등)

void foo(const char* s)		   { std::cout << "const char*\n"; }
void foo(const std::string& s) { std::cout << "std::string\n"; }
void foo(std::string_view   s) { std::cout << "string_view\n"; }

int main()
{
	foo("hello"); // const char*
	foo("hello"s); // std::string 
	foo("hello"sv); // std::string_view

	// C++17 부터는 클래스 템플릿 인자 생략 가능
	std::vector v = { "AA", "BB" }; // v의 요소의 타입은 ?
									// const char *

	std::vector v1 = { "AA"s, "BB"s }; // std::string
}