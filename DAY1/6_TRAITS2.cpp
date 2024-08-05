#include <iostream>
#include <list>


// �ݺ����� ����
// 1. class �� ������� ��ü�� �ݺ���(slist_iterator ���� ��)
// 2. raw pointer

// �� 2���� ������ ������ �Ʒ� sum ���� �˰����� ����� ��ƽ��ϴ�.

// �� ������ �ذ�å : std::iterator_traits
// => �����ҽ����� �ذ�                 


template<typename T>
typename T::value_type sum(T first, T last)
{
	typename T::value_type  s = 0;

	while (first != last)
	{
		s += *first;
		++first;
	}
	return s;
}

int main()
{
	std::list<int> s = { 1,2,3,4,5,6,7,8,9,10 };
	int n = sum(s.begin(), s.end());
	std::cout << n << std::endl; 


	// �ٽ� : raw pointer �� �ݺ��� �Դϴ�.
	int x[10] = {1,2,3,4,5,6,7,8,9,10};

	int n1 = sum(x, x + 10);

	std::cout << n1 << std::endl; 

}

