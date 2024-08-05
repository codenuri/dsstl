#include <iostream>
#include <iterator>
#include <list>
#include <fstream>

int main()
{
	std::ifstream fin("1_stream3.cpp"); // 현재 파일이름

	std::istream_iterator<char> p1(fin); 
	std::istream_iterator<char> p2;		// 인자가 없으면 EOF

	std::ostream_iterator<char> p3(std::cout, "");


	std::copy(p1, p2, p3);
}


