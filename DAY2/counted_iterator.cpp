#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>


class my_default_sentinel_t
{
};
my_default_sentinel_t my_default_sentinel;

// my_default_sentinel_t
// => 어떠한 멤버도 없는 클래스 입니다.(empty class)
// => empty 라도 분명 한나의 독립된 타입입니다
// => 참고로 empty class 의 크기는 1byte 입니다.




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
		// a 인자도 필요 없습니다. 
		// counted_iterator 는 자신이  스스로 끝인지 판단가능합니다.
		return length != 0;
	}

	bool operator==(my_default_sentinel_t a)
	{
		// a 인자도 필요 없습니다. 
		// counted_iterator 는 자신이  스스로 끝인지 판단가능합니다.
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









