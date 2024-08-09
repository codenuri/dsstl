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

//--------------------------------
// pipe line 을 지원하는 위한 코드들
struct take_helper
{
	std::size_t count;
};

take_helper take(std::size_t cnt)
{
	return take_helper{ cnt };  // 생성자 없어도 이렇게 초기화 가능
}

template<typename C> 
take_view<C> operator|(C& c, take_helper helper)
{
	return take_view<C>(c, helper.count);
}


int main()
{
	std::vector<int> v = { 1,2,3,7,8,9,4,5,6,10 };

	// #1. 클래스 직접 사용
	take_view tv1(v, 5);

	// #2. 도움 함수(object generator)
	auto tv2 = take(v, 5);

	// #3. 핵심: pipe line 기술 적용
	auto tv3 = v | take(5); // vector | take_helper
							// operator|(vector, take_helper)
					// take_view operator|(Container, take_helper)

	

	for (auto e : tv3)
	{
		std::cout << e << ", ";
	}


}