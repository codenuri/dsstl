#include <vector>
#include <iostream>
#include <algorithm>
#include "show.h"

// capacity 개념
int main()
{
//	std::vector<int> v(10, 0);

	std::vector<int, debug_alloc<int> > v(10, 0);

	v.resize(7); // 어떻게 구현했을까요 ?
				 // => 메모리 재할당 안함. 10개 계속 사용
				 // => size 변수만 7로 변경

	std::cout << v.size() << ", " << v.capacity() << std::endl;

	v.push_back(0); // 끝에 한개 추가
					// => 현재 상태는 size < capacity 이므로
					// => 이 연산은 "not expensive"
					// => 메모리 재할당 없다.					

	std::cout << v.size() << ", " << v.capacity() << std::endl;
			
	v.shrink_to_fit(); // 필요없는 여분의 메모리 제거
					   // => 8개 메모리 재할당하고
					   // => 10개 메모리는 제거
					   // => 즉, 버퍼 자체가 변경됨

	std::cout << v.size() << ", " << v.capacity() << std::endl;

	v.push_back(0); // 끝에 한개 추가
					// => 현재 상태는 size == capacity 상태
					// => 메모리 재할당 필요
					// => "expensive"

					// g++ : 기존 capacity * 2 로 할당
					// visual studio : 기존 capacity * 1.5

	std::cout << v.size() << ", " << v.capacity() << std::endl;
					// 9,			 12
	
	v.clear();	// 실제 메모리를 제거할까요 ??
				// => size 만 0으로
				// => 메모리 제거 안함
				// => 제거하려면 shrink_to_fit() 사용


	std::cout << v.size() << ", " << v.capacity() << std::endl;
					// 0			12

	v.shrink_to_fit();

	std::cout << v.size() << ", " << v.capacity() << std::endl;
}




