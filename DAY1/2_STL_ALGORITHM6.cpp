// 2_STL_ALGORITHM6

#include <iostream>

// find 정리

// 검색구간 : [first, last) 에서 구간에서 선형 검색 수행
//		     last 는 검색 대상 아님
// 
// 구간의 표현 : 반드시 포인터 일 필요는 없음
//			    ++, ==, !=, * 연산이 가능한 모든 타입

// 구간의 이동 : 전위형 ++ 연산자

// 실패의 반환 : last

// cppreference.com 에서 "std::find" 찾아보세요
template<typename InputIter, typename T>
InputIter find(InputIter  first, InputIter last, T c)
{
	while (first != last && *first != c)
		++first;
	return first;
}

int main()
{
	double x[] = { 1,2,3,4,5,6,7,8,9,10 };

	double* p = find(x, x + 3, 5);


	if (p == x + 3)
		std::cout << "not found" << std::endl;
	else
		std::cout << "found : " << *p << std::endl;
}