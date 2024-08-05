#include <iostream>
#include <list>   
#include <vector>

// 반복자 무효화 - 중요!!! 
int main()
{
	std::vector<int> v = { 1,2,3,4,5 };
	
	auto p = v.begin();

	std::cout << *p << std::endl; // ok

	v.resize(10); // 이 순간 v의 버퍼가 어떻게 될지 생각해보세요

	std::cout << *p << std::endl; // ???
}



