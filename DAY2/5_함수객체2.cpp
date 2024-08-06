#include <iostream>
#include <list>
#include <algorithm>

bool foo(int n) { return n % 3 == 0; }

int main()
{
	std::list<int> s = { 1,2,6,4,5,3,7,8,9,10 };

	
	// �־��� �������� "3" �˻�
	auto ret1 = std::find(s.begin(), s.end(), 3);


	// �־��� �������� ó�������� "3�� ���" �˻�
	auto ret2 = std::find_if(s.begin(), s.end(), foo);

	std::cout << *ret2 << std::endl; // 6

	int k = 3;
}




