#include <vector>
#include <iostream>
#include <algorithm>
#include "show.h"

int main()
{
	std::vector<int> v1(1000, 0); // 1000 ���� 0����


	std::vector<int> v2;
	v2.reserve(1000);	// capacity �� 1000 ����, size = 0


	v1.push_back(0);
	v2.push_back(0);
}




