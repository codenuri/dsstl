#include <iostream>
#include <string>
#include "show.h"

// std::string 의 원리 
// SSO ( small string optimization )
// => 길이가 긴 문자열은 힙에 보관하고
// => 길이가 작은 문자열은 string 객체 내부에 보관
// => 보통 16자 정도를 기준으로

using mystring = std::basic_string<char, std::char_traits<char>,
					debug_alloc<char>>;

int main()
{
//	mystring s1 = "to be or not to be";

	mystring s1 = "hello";

	
	std::cout << s1.size() << ", " << s1.capacity() << std::endl;
}

