#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>

template<typename IT>
class my_counted_iterator
{
	IT iter;
	int length;
public:
	my_counted_iterator(IT it, int cnt) : iter(it), length(cnt) {}

	int count() { return length; }

	my_counted_iterator& operator++()
	{
		++iter;
		--length;
		return *this;
	}

	typename std::iterator_traits<T>::value_type& operator*()
	{ 
		return *iter; 
	}
};

int main()
{
	std::list<int> s = { 1,2,3,4,5,6,7,8,9,10 };

	my_counted_iterator ci(s.begin(), 5);

//	while (ci != std::default_sentinel)
	while (ci.count() != 0)
	{
		std::cout << *ci << std::endl;
		++ci;
	}

}









