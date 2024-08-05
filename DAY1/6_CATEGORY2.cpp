#include <iostream>
#include <vector>
#include <list>
#include <forward_list>
#include <algorithm>

// 입력 반복자 : 입력(=*p), ++
// 출력 반복자 : 출력(*p=), ++
// 전진형 반복자 : 입력(=*p), ++		싱글링크드 리스트 반복자
// 양방향 반복자 : 입력(=*p), ++, --  더블리스트 반복자
// 임의접근 반복자 : 입력(=*p), ++, --, +, -, []  연속된 메모리와유사한컨테이너

int main()
{
	std::forward_list<int> s1 = { 1,2,3 };
	std::list<int> s2 = { 1,2,3 };
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	// find 에 전달되는 1, 2번째 인자가 가져야 하는 
	// => 최소 요구조건을 5개 분류에서 찾아 보세요
	// => 입력 반복자 !!
	auto p = std::find(v.begin(), v.end(), 5);

	// reverse 1,2 번째 인자에 대한 최소 요구조건은 ?
	// => 양방향 반복자
	std::reverse( s1.begin(), s1.end() ); // error
				// s1 은 싱글리스트 이므로 반복자 분류는 전진형
				// 요구조건을 만족하지 않으므로 error

	std::reverse(s2.begin(), s2.end()); // ok. 

	// std::sort : 퀵소트 입니다.
	// => 인자로 전달되는 반복자 조건 : 임의조건 반복자
	//				  - 연산이 가능해야 퀵소트를만들수 있다.
//	std::sort( s2.begin(), s2.end() ); // error

	// list 는 퀵소트는 안돼지만 다른 알고리즘을 사용하면 됩니다.
	// 그래서 list 를 std::sort() 알고리즘에 보낼수 없지만
	// 멤버 함수 sort 가 있습니다.
	s2.sort(); // 퀵이 아닌 다른 알고리즘


	// v는 현재 vector 입니다.
	v.sort(); // 이 멤버 함수가 있을까요 ??
}