#include <iostream>
#include <list>

// sum() �� ����� ���ô�.

// �Ʒ� �ڵ忡��
// T             : �ݺ��� Ÿ��
// T::value_type : �ݺ��ڰ� ����Ű�� ����� Ÿ��

template<typename T>
typename T::value_type sum(T first, T last)
{
	typename T::value_type  s = 0;

	while (first != last)
	{
		s += *first;
	}
	return s;
}

int main()
{
	std::list<int> s = { 1,2,3,4,5,6,7,8,9,10 };

	int n = sum( s.begin(), s.end() );

	std::cout << n << std::endl; // 55
}