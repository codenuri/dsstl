#include <iostream>
#include <list>
#include <iterator>

template<typename T>
class my_back_insert_iterator
{
	T& c;
public:
	inline my_back_insert_iterator(T& c) : c(c) {}

	inline my_back_insert_iterator& operator*()
	{
		return *this; 
	}
	inline void operator=( const typename T::value_type& value)
	{
		c.push_back(value);
	}
};
int main()
{
	std::list<int> s = { 1, 2, 3, 4, 5 };

	my_back_insert_iterator< std::list<int> > p(s);

	*p = 10; // s.push_back(10)
			 // ( p.operator*() ).operator=(10)
			 // p.operator=(10)
	
	for (auto e : s)
	{
		std::cout << e << ", ";
	}
}
