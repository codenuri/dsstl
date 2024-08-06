#include <iostream>
#include <iterator>
#include <list>

// #1. container/�迭 ����
template<typename C>
void show(const C& c)
{
	for (auto& e : c)
	{
		std::cout << e << ", ";
	}
	std::cout << '\n';
}
// #2. �ݺ��� ����
template<typename T>
void show(T first, T last)
{
	std::ostream_iterator< typename std::iterator_traits<T>::value_type > p(std::cout, ", ");

	std::copy(first, last, p);

	std::cout << '\n';
}

int main()
{
	std::list<int> s = { 1, 2, 3 };
	int x[3] = { 1, 2, 3 };

	show(s);
	show(x);

	show(s.begin(), s.end());
	show(x, x + 3);

}


