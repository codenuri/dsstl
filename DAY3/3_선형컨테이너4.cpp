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

	v.push_back(0); // 끝에 한개 추가
					// => 현재 상태는 size < capacity 이므로
					// => 이 연산은 "not expensive"
					// => 메모리 재할당 없다.					

	std::cout << v.size() << ", " << v.capacity() << std::endl;
			
	
}




