#include <iostream>
#include <list>


// 반복자의 형태
// 1. class 로 만들어진 객체형 반복자(slist_iterator 같은 것)
// 2. raw pointer

// 위 2개의 차이점 때문에 아래 sum 같은 알고리즘을 만들기 어렵습니다.

// 이 문제의 해결책 : std::iterator_traits
// => 다음소스에서 해결                 


template<typename T>
typename T::value_type sum(T first, T last)
{
	typename T::value_type  s = 0;

	while (first != last)
	{
		s += *first;
		++first;
	}
	return s;
}

int main()
{
	std::list<int> s = { 1,2,3,4,5,6,7,8,9,10 };
	int n = sum(s.begin(), s.end());
	std::cout << n << std::endl; 


	// 핵심 : raw pointer 도 반복자 입니다.
	int x[10] = {1,2,3,4,5,6,7,8,9,10};

	int n1 = sum(x, x + 10);

	std::cout << n1 << std::endl; 

}

