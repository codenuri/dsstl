#include <iostream>
#include <list>

template<typename C>
void f1(C& c)
{
	// ? 채우세요
	typename C::value_type n = c.front();
	// => 컨테이너가 보관하는 요소의 타입
}
template<typename IT>
void f2(IT p)
{
	typename IT::value_type n = *p; 
				// 반복자 IT 가 가리키는 타입
				// 단, 객체형 반복자만 가능. raw pointer 안됨.

	typename std::iterator_traits<IT>::value_type n2 = *p;
				// 객체형 반복자, raw pointer 모두 가능

	// C++20 부터 위코드의 별명이 제공됩니다.
	std::iter_value_t<IT>  n3 = *p; // typename 필요 없습니다.
									// :: 이 없습니다.
}

int main()
{
	std::list<int> s = { 1,2,3,4,5,6,7,8,9,10 };
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };

	f1(s); // 컨테이너 전달
	f2(s.begin()); // 반복자 전달(객체형)
	f2(x);		   // 반복자 전달(raw pointer)	 


}

