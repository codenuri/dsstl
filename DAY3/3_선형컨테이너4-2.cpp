#include <vector>
#include <iostream>
#include <algorithm>
#include "show.h"

int main()
{
	std::vector<int, debug_alloc<int> > v1;

	for (int i = 0; i < 1000; i++)
	{
		std::cout << i << "----------------\n";

		v1.push_back(i);
	}

}




