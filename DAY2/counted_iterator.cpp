#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>

int main()
{
	std::list<int> s = { 1,2,3,4,5,6,7,8,9,10 };


	std::counted_iterator ci(s.begin(), 5);

	while (ci != std::default_sentinel)
	{
		std::cout << *ci << std::endl;
		++ci;
	}

}









