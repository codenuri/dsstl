// spaceship1
#include <iostream>

int main()
{
	int a = 1;
	int b = 2;

	// <=> : three way comparison operator 라는 공식이름
	//		 "spaceship operator" 라는 별명!
	auto ret = a <=> b;

	if (ret < 0)         std::cout << "a < b\n";
	else if ( ret == 0)  std::cout << "a == b\n";
	else if ( ret > 0)   std::cout << "a > b\n";
}