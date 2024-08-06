#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>


class my_default_sentinel_t
{
};
my_default_sentinel_t my_default_sentinel;

// my_default_sentinel_t
// => ��� ����� ���� Ŭ���� �Դϴ�.(empty class)
// => empty �� �и� �ѳ��� ������ Ÿ���Դϴ�
// => ����� empty class �� ũ��� 1byte �Դϴ�.




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

	typename std::iterator_traits<IT>::value_type& operator*()
	{ 
		return *iter; 
	}

	bool operator!=(my_default_sentinel_t a)
	{
		// a ���ڵ� �ʿ� �����ϴ�. 
		// counted_iterator �� �ڽ���  ������ ������ �Ǵܰ����մϴ�.
		return length != 0;
	}

	bool operator==(my_default_sentinel_t a)
	{
		// a ���ڵ� �ʿ� �����ϴ�. 
		// counted_iterator �� �ڽ���  ������ ������ �Ǵܰ����մϴ�.
		return length == 0;
	}
};

int main()
{
	std::list<int> s = { 1,2,3,4,5,6,7,8,9,10 };

	my_counted_iterator ci(s.begin(), 5);

	while (ci != my_default_sentinel) // ci.operator!=(my_default_sentinel_t)
//	while (ci.count() != 0)
	{
		std::cout << *ci << std::endl;
		++ci;
	}
	
}









