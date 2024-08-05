#include <iostream>
#include <list>
#include <vector>
#include <algorithm> // find 같은 알고리즘(일반함수)가
					// 이 헤더에 있습니다.
int main()
{
	std::list<int> c = { 1,2,3,4,5,6,7,8,9,10 };

	// 아래 코드에서 ? 채워 보세요
	? p = std::find(? , ? , 5 ); 

	if (p == ? )
		std::cout << "검색실패\n";
	else
		std::cout << "검색성공 : " << ? << std::endl;
}