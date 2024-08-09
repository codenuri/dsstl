#include <iostream>
#include <vector>
#include <algorithm>

template<typename T> class take_view
{
	T& c;
	std::size_t cnt;
public:
	take_view(T& c, std::size_t cnt) : c(c), cnt(cnt) {}

	auto begin() { return c.begin(); }
	auto end() { return std::next(c.begin(), cnt); }
};

// take_view 객체를 만드는 함수 제공
// => object generator 패턴 사용

template<typename T>
take_view<T> take(T& c, std::size_t cnt)
{
	return take_view<T>(c, cnt);
}


int main()
{
	std::vector<int> v = { 1,2,3,7,8,9,4,5,6,10 };

	// #1. 클래스 직접 사용
	take_view tv1(v, 5);

	// #2. 도움 함수(object generator)
	auto tv2 = take(v, 5);

	

	for (auto e : tv1)
	{
		std::cout << e << ", ";
	}


}