// insert2.cpp
#include <iostream>
#include <algorithm>
#include <list>

// �Լ� ����

int main(int argc, char** argv)
{
	std::list<int> s1 = { 10,20,30,40,50 };
	std::list<int> s2 = { 1, 2, 3, 4, 5 };
	
	// #1. �Ʒ� �ڵ�� s1�� ������ s2�� "�����"
//	std::copy(s1.begin(), s1.end(), s2.begin());

	// #2. 
	std::back_insert_iterator<std::list<int>> p(s2);

	std::copy(s1.begin(), s1.end(), p );


	for (auto& n : s2)
		std::cout << n << std::endl; 
}
