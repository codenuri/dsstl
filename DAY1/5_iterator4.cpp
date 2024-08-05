#include <iostream>
#include <list>   
#include <vector>

// 반복자 무효화 - 중요!!! 
int main()
{
	std::vector<int> v = { 1,2,3,4,5 }; // 모든 요소가 연속된 메모리
	
	auto p = v.begin();

	std::cout << *p << std::endl; // ok

	v.resize(10);	// 이 순간 v의 버퍼가 어떻게 될지 생각해보세요
					// => 이순간 새로운 버퍼가 할당되고
					// => 기존에 사용하던 버퍼는 제거 됩니다.
					// => 이 코드 이전에 꺼냈던 모든 반복자는 
					//    무효화(invalidate) 됩니다.
					//    사용할수 없습니다.


	std::cout << *p << std::endl; // 미정의 동작 발생..
								  // 버그!!
								  // p는 무효화 되었으므로
								  // 절대 사용하면 안됩니다.
}



