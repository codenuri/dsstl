// 3_알고리즘과정책변경
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>    // 수치 관련 연산
#include <functional>
#include "show.h"

// <algorithm> 헤더
// => 정렬, 검색, 순열, 이진 검색등의 "컴퓨터 알고리즘" 관련 기능

// <numeric> 헤더
// => 합, 부분합, 내적 등의 수치 관련 기능

// <memory>
// => 메모리 관련, 요소 초기화등..

int mul(int a, int b) { return a * b; }

int main()
{
	std::vector<int> v1 = { 1,2,3,4,5,6,7,8,9,10 };

//	int n1 = std::accumulate(v1.begin(), v1.end(), 0);
							// => 이항함수 생략시 "+" 로 수행.

//	int n1 = std::accumulate(v1.begin(), v1.end(), 1, mul);
							// => 이항 함수 전달 버전. 
							// => 일반 함수 전달했으므로 인라인 치환 안됨


	int n1 = std::accumulate(v1.begin(), v1.end(), 1, 
										std::multiplies<int>{} );
							// => 함수 객체 버전
							// => +,-,*,/ 등의 연산을 수행하는
							//    함수 객체가 이미 표준에 있습니다.
							//    cppreference.com 참고

	std::cout << n1 << std::endl;

}
