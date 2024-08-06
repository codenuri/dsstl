// 1_단위전략3-1
#include <vector>
#include <iostream>

int main()
{
	std::vector<int> v;

	std::cout << "------------------\n";

	v.resize(5); // 이 순간 5개 버퍼 할당

	std::cout << "------------------\n";
}