// container5.cpp 추가
#include <iostream>
#include <list>
#include <vector>
#include <algorithm> // find 같은 알고리즘(일반함수)가
					 // 이 헤더에 있습니다.
int main()
{
//	std::list<int>   c = { 1,2,3,4,5,6,7,8,9,10 };
	std::vector<int> c = { 1,2,3,4,5,6,7,8,9,10 };

	// 아래 코드에서 ? 채워 보세요
	std::list<int>::iterator p = std::find( c.begin(), c.end(), 5);
								 // c.find(5)

	if (p == c.end() )
		std::cout << "검색실패\n";
	else
		std::cout << "검색성공 : " << *p << std::endl;
}

// 1일차 : iterator
// 2일차 : algorithm
// 3일차 : container 