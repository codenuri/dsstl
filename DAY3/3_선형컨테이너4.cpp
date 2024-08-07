#include <vector>
#include <iostream>
#include <algorithm>
#include "show.h"

// capacity 개념
int main()
{
	std::vector<int> v(10, 0);

	v.resize(7); // 어떻게 구현했을까요 ?
				 // => 메모리 재할당 안함. 10개 계속 사용
				 // => size 변수만 7로 변경

	std::cout << v.size() << ", " << v.capacity() << std::endl;

	
}




