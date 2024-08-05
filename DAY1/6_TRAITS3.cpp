#include <iostream>
#include <list>
/*
template<typename T>
struct iterator_traits
{
	using value_type = typename T::value_type;
};

// 템플릿 부분 특수화 문법
template<typename T>
struct iterator_traits<T*>
{
	using value_type = T;
};
*/

template<typename T>
typename std::iterator_traits<T>::value_type sum(T first, T last)
{
//	typename T::value_type  s = 0;

	typename std::iterator_traits<T>::value_type  s = 0;



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


	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };

	int n1 = sum(x, x + 10);

	std::cout << n1 << std::endl;

}

