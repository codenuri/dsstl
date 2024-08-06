#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>

// 1 => 04로 변경

int main()
{
	std::list<int> s = { 1,2,3,4,5,6,7,8,9,10 };

	auto p = std::next(s.begin(), 2);


	std::counted_iterator ci(p, 5);

	// std::find 로 ci 에서 '4' 찾아보세요
	// => 컴파일해서 에러 나오는 것 확인해 보세요
	// => 왜 에러일지 생각해 보세요. 
	auto ret = std::find(? );

}









