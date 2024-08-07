#include <iostream>
#include <vector>
#include "show.h"

#include <set> 

int main()
{
//	std::set<int> s; 
//	std::set<int, std::less<int>, std::allocator<int> > s;

	// #1. �� ��å ��ü �ϱ�( policy base design )
	// => ����  : modern c++ design å ( policy base design ����)
	std::set<int, std::greater<int> > s;

	s.insert(20);
	s.insert(30);
	s.insert(15);
	s.insert(5);
	s.insert(40);
	s.insert(18);

	// #2. set �� �ߺ��� ������� �ʽ��ϴ�.
	// => insert ���н� ��ȯ������ �˷� �ݴϴ�.
//	std::pair<std::set<int, std::greater<int>>::iterator, 
//		      bool> ret = s.insert(15);

	auto ret = s.insert(15);

	if (ret.second == false)
	{
		std::cout << "insert ����\n";
	}

	// #3. set �� push_front, push_back �ȵ˴ϴ�.
	//	   insert �Ǵ� emplace �� ����
//	s.push_back(3);		// error
//	s.push_front(100);	// error


	// #4. �ݺ��ڴ� �б� ���� �Դϴ�.
	auto p = s.begin();
//	*p = 50; // error.



	while (p != s.end())
	{
		std::cout << *p << std::endl;
		++p;
	}

}







