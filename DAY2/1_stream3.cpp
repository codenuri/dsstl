#include <iostream>
#include <iterator>
#include <list>
#include <fstream>

int main()
{
	std::ostream_iterator<int> p1(std::cout, ", ");
	std::istream_iterator<int> p2(std::cin);

	std::ifstream fin("1_stream3.cpp"); // ���� �����̸�

	std::istream_iterator<char> p3(fin);

	std::cout << *p3 << std::endl;
	std::cout << *p3 << std::endl;
}


