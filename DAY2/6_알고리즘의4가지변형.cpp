#include <iostream>
#include <vector>
#include <algorithm>
#include "show.h"

int main()
{
	std::vector<int> v1 = { 1,2,3,4,5,6,7,8,9,10 };
	std::vector<int> v2 = { 0,0,0,0,0,0,0,0,0,0 };
	
	// #1. inplace, value 버전
//	auto p1 = std::remove(v1.begin(), v1.end(), 3);


	// #2. inplace, predicator 버전
	// xxx_if 버전 : 마지막 인자가 value 가 아닌 predicator

//	auto p2 = std::remove_if(v1.begin(), v1.end(), 
//						[](int n) { return n % 3 == 0; }) ;


	// #3. copy, value 버전
	// p3 : v2 의 유효하지 않은 구간의 1번째 요소를 가리키는 반복자
	//      (복사한 요소들의 다음을 가르키는 반복자)

	// v1 => v2 복사후 remove(v2) 하는 것보다 아래 처럼하면 2배 성능향상
	// 하지만 sort_copy() 는 copy 후 sort 하는 것에 비해 큰 차이 없습니다
	// 그래서 sort_copy 는 없습니다.
//	auto p3 = std::remove_copy(v1.begin(), v1.end(), v2.begin(), 3);


	// #4. copy, predicator 버전
	auto p4 = std::remove_copy_if(v1.begin(), v1.end(), v2.begin(), 
					[](int n) { return n % 3 == 0; } );



	show(v1);
	show(v2);
}
