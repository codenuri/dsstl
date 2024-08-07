#include <iostream>
#include <vector>
#include "show.h"
#include <set> 

int main()
{
	std::set<int> s;

	s.insert(20);
	s.insert(30);
	s.insert(15);

	
	// 아래 코드에 대해서 평가해보세요
	// => 선형 검색
	// => s.begin() 부터 ++ 연산자로 이동
	// => "equality(동일성)" 검색
	//    찾을때 "==" 연산자로 
	auto ret1 = std::find(s.begin(), s.end(), 30);


	// set(tree)는 이진 검색을 해야 효율적이다.
	// => 이진 검색
	// => root 요소 부터 크기를 비교해서 검색
	// => "equivalency(동등성)" 검색
	//    크지도 않고 작지도 않으면 "찾았다"
	auto ret2 = s.find(30);
}
/*
template<typename T, 
		 typename Pr = std::less<T>,
	     typename Alloc = std::allocator<T>>
class set
{
	Pr cmp; // 비교 함수 객체
public:
	iterator find(const T& e)
	{
		if (cmp(root, e) == true)
			오른쪽 자식으로 이동;

		else if ( cmp( e, root ) == true )
			왼쪽으로 이동

		else 
			찾았다.
	}
};

*/



