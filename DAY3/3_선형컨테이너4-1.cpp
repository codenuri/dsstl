#include <vector>
#include <iostream>
#include <algorithm>
#include "show.h"

int main()
{
	std::vector<int> v1(1000, 0); // 1000 ���� 0����
								  // capacity=1000, size=1000


	std::vector<int> v2;
	v2.reserve(1000);	// capacity �� 1000 ����, size = 0


	v1.push_back(0); // 1001��° �ֱ�. �޸� ���Ҵ� �ʿ�
	v2.push_back(0); // 1��° �ֱ�. �޸� ���Ҵ� ����

	std::cout << v1.size() << ", " << v1.capacity() << std::endl;
	std::cout << v2.size() << ", " << v2.capacity() << std::endl;
}




