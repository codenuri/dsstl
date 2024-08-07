#include <iostream>
#include <vector>
#include "show.h"

#include <set> 

int main()
{
//	std::set<int> s; 
//	std::set<int, std::less<int>, std::allocator<int> > s;

	// #1. 비교 정책 교체 하기( policy base design )
	// => 참고  : modern c++ design 책 ( policy base design 설명)
	std::set<int, std::greater<int> > s;

	s.insert(20);
	s.insert(30);
	s.insert(15);
	s.insert(5);
	s.insert(40);
	s.insert(18);

	// #2. set 은 중복을 허용하지 않습니다.
	// => insert 실패시 반환값으로 알려 줍니다.
//	std::pair<std::set<int, std::greater<int>>::iterator, 
//		      bool> ret = s.insert(15);

	auto ret = s.insert(15);

	if (ret.second == false)
	{
		std::cout << "insert 실패\n";
	}

	// #3. set 은 push_front, push_back 안됩니다.
	//	   insert 또는 emplace 만 가능
//	s.push_back(3);		// error
//	s.push_front(100);	// error


	// #4. 반복자는 읽기 전용 입니다.
	auto p = s.begin();
//	*p = 50; // error.



	while (p != s.end())
	{
		std::cout << *p << std::endl;
		++p;
	}

}







