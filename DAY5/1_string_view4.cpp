#include <iostream>
#include <string>
#include <string_view>
#include <vector>
using namespace std::literals; // ����� ���� ���̻� ��� (s, sv��)

void foo(const char* s)		   { std::cout << "const char*\n"; }
void foo(const std::string& s) { std::cout << "std::string\n"; }
void foo(std::string_view   s) { std::cout << "string_view\n"; }

int main()
{
	foo("hello"); // const char*
	foo("hello"s); // std::string 
	foo("hello"sv); // std::string_view

	// C++17 ���ʹ� Ŭ���� ���ø� ���� ���� ����
	std::vector v = { "AA", "BB" }; // v�� ����� Ÿ���� ?
									// const char *

	std::vector v1 = { "AA"s, "BB"s }; // std::string
}