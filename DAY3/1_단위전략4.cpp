#include <iostream>
#include <string>

int main()
{
	std::string s1 = "abcd";
	std::string s2 = "ABCD";

	// 결과 예측해 보세요
	std::cout << (s1 == s2) << std::endl; // false 
}