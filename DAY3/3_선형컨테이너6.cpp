#include <vector>
#include <list>
#include <iostream>
#include <algorithm>
#include "show.h"

// 컨테이너를 보관하는 컨테이너
// => 다양한 형태의 자료구조를 편리하게 만들수 있습니다.
int main()
{
	std::vector<int> v1(10, 0);
	v1[0] = 10;

	std::vector< std::vector<int> > v2(10,  std::vector<int>(10));
	
	v2[0][1] = 10;

	std::vector<std::list<int>> v3(10);
	
}