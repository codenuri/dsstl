#include <iostream>
#include <list>   
#include <vector>

// �ݺ��� ��ȿȭ - �߿�!!! 
int main()
{
	std::vector<int> v = { 1,2,3,4,5 };
	
	auto p = v.begin();

	std::cout << *p << std::endl; // ok

	v.resize(10); // �� ���� v�� ���۰� ��� ���� �����غ�����

	std::cout << *p << std::endl; // ???
}



