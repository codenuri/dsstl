#include <iostream>
#include <list>
#include <algorithm>

int main()
{
	std::list<int> s = { 1,2,3,4,5,6,7,3,9,10 };

//	auto first = s.begin();
//	auto last  = s.end();

//	auto first = std::make_reverse_iterator( s.end() );
//	auto last = std::make_reverse_iterator( s.begin());

	// 아래 2줄이 위 2줄과 완전히 동일합니다.
	auto first = s.rbegin(); // std::make_reverse_iterator( s.end() );
	auto last  = s.rend();

	auto ret1 = std::find(first, last, 3);

	// reverse iterator 덕분에 모든 알고리즘은
	// "역방향" 으로도 연산 가능합니다.
	auto ret2 = std::find(s.begin(),  s.end(), 3);
	auto ret3 = std::find(s.rbegin(), s.rend(), 3);

	
}
