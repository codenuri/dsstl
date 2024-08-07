// 선형 컨테이너 ( sequence container )
// => 요소가 삽입된 순서를 유지하면서 한줄로 보관되는 컨테이너

// C++98 에서 3개
#include <vector>  // 연속된 메모리, 임의접근 반복자
#include <deque>   // 연속된 메모리와 유사, 임의접근 반복자
#include <list>    // 떨어진 메모리, 양방향 반복자


// C++11 추가된 2개
#include <forward_list> // 전진형 반복자
#include <array>		// 임의접근 반복자

#include "show.h"

int main()
{
	// #1. 메모리 구조
	std::vector<int> v = { 1,2,3,4,5 }; // 연속된 메모리
	std::list<int>   s = { 1,2,3,4,5 }; // 떨어진 메모리
	std::deque<int>  d = { 1,2,3,4,5 }; // vector 와 list의 절충
										// 연속된 메모리를 다시 list로


	// #2. 사용법이 거의 동일합니다.( 멤버 함수 이름 동일)
	// => 기능은 거의 동일
	// => 성능이 다르다.
	// 검색 : vector가 제일 빠르고
	// 중간삽입 : list 가 더 좋을수 있다. 단 상황에 따라 다를수 있다.
	v.push_back(5);
	s.push_back(5);
	d.push_back(5);

	// #3. 차이점이 있다면 의도적인 설계
	v.push_front(5); // error. vector 는 전방 삽입/삭제 안됨
	s.push_front(5); // ok
	d.push_front(5); // ok

	v[0] = 10;  // ok
	s[0] = 10;	// error. list 는 [] 안됨.
	d[0] = 10;	// ok

}
