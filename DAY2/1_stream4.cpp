#include <iostream>
#include <iterator>
#include <list>
#include <fstream>

int main()
{
	std::ifstream fin("1_stream3.cpp"); // ���� �����̸�

	std::istream_iterator<char> p1(fin); 
	std::istream_iterator<char> p2;		// ���ڰ� ������ EOF

	std::ostream_iterator<char> p3(std::cout, "");


	std::copy(p1, p2, p3);
}


