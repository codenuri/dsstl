#include <vector>
#include <iostream>
#include <algorithm>
#include "show.h"

int main()
{
	std::vector<int> v1(1000, 0); // 1000 개를 0으로
								  // capacity=1000, size=1000


	std::vector<int> v2;
	v2.reserve(1000);	// capacity 만 1000 으로, size = 0


	v1.push_back(0); // 1001번째 넣기. 메모리 재할당 필요
	v2.push_back(0); // 1번째 넣기. 메모리 재할당 없음

	std::cout << v1.size() << ", " << v1.capacity() << std::endl;
	std::cout << v2.size() << ", " << v2.capacity() << std::endl;
}




