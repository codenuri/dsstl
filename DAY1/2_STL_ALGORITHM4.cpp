#include <iostream>

// Step 4. 보다 generic 하게 - 약간 어려운 단계

// 아래 처럼 template 을 만들면
// 1. T* 라고 표기시
// => "raw pointer" 만 전달 가능합니다.
// => "raw pointer" 는 아니지만 포인터 역활을 하는 다른 요소(스마트포인터)
//    를 전달할수 없습니다.

// 2. 구간의 타입과 요소의 타입이 연관됩니다.
// => double 배열에서는 double 만 검색 가능합니다.
// => double 배열에서는 float, int 등을 검색할수 없습니다.

// template<typename T>
// T* find(T*  first, T* last, T c)

template<typename T1, typename T2>
T1 find(T1  first, T1 last, T2 c)
{
	while (first != last && *first != c)
		++first;

	return first == last ? nullptr : first;
}

int main()
{
	double x[] = { 1,2,3,4,5,6,7,8,9,10 };

	double* p = find(x, x + 10, 5);


	if (p == nullptr)
		std::cout << "not found" << std::endl;
	else
		std::cout << "found : " << *p << std::endl;
}