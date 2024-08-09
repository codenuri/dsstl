#include <iostream>
#include <vector>
#include <algorithm>
// C++17 이상으로 놓으세요
template<typename T> class take_view
{
	T& c;
	std::size_t cnt;
public:
	take_view(T& c, std::size_t cnt) : c(c), cnt(cnt) {}

	auto begin() { return c.begin(); }
	auto end()   { return std::next(c.begin(), cnt); }
};
int main()
{
	std::vector<int> v = { 1,2,3,7,8,9,4,5,6,10 };

	take_view tv(v, 5);

	v[0] = 100;

//	for (auto e : v)
	for (auto e : tv)
	{
		std::cout << e << ", ";
	}


}