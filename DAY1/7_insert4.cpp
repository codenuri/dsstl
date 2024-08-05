#include <iostream>
#include <list>
#include <iterator>

int main()
{
	std::list<int> s = { 1, 2, 3, 4, 5 };

	std::back_insert_iterator< std::list<int> > p(s);


	*p = 10; // s.push_back(10)


}
