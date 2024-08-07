#include <iostream>
#include <vector>
#include "show.h"

#include <set> // Red Black Tree·Î ±¸Çö

int main()
{
	std::vector<int> v = { 20, 30, 15, 5, 40 };


	std::set<int> s;

	s.insert(20);
	s.insert(30);
	s.insert(15);
	s.insert(5);
	s.insert(40);
	s.insert(18);

	auto p = s.begin();

	while (p != s.end())
	{
		std::cout << *p << std::endl;
		++p;
	}
	
}







