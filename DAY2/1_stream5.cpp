#include <iostream>
#include <iterator>
#include <list>

// #1. container/배열 버전
template<typename C>
void show(const C& c)
{
	for (auto& e : c)
	{
		std::cout << e << ", ";
	}
	std::cout << '\n';
}

int main()
{
	std::list<int> s = { 1, 2, 3 };
	int x[3] = { 1, 2, 3 };

	show(s);
	show(x);

}


