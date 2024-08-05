#include <iostream>
#include <list>
#include <iterator>

// ��� �ݺ��ڴ� �ݵ��
// => ++ �� * ������ �����ؾ� �մϴ�.

// �Ʒ� "���Թݺ���"�� �ݺ��� �̹Ƿ�
// => �ݵ�� ++, * ������ �Ǿ�� �մϴ�.


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
	inline void operator=(const typename T::value_type& value)
	{
		c.push_back(value);
	}

	my_back_insert_iterator& operator++()
	{
		// ??
		return *this;
	}
};

// �Լ� ����
template<typename T>
my_back_insert_iterator<T> my_back_inserter(T& c)
{
	return my_back_insert_iterator<T>(c);
}

int main()
{
	std::list<int> s1 = { 1, 2, 3, 4, 5 };
	std::list<int> s2 = { 1, 2, 3, 4, 5 };

	auto p = my_back_inserter(s2);

	*p = 10; 

	std::copy(s1.begin(), s1.end(), p); // ??
				// => std::copy �� ���������� 1��°, 3��° ���ڷ� ����
				//    �ݺ��ڸ� ++ �������� �̵��ϰ� �˴ϴ�.
				// => ����, 3��° ���� p �� �ݵ�� ++������ �����ؾ��մϴ�


	for (auto e : s2)
	{
		std::cout << e << ", ";
	}
}
