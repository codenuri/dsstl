// 2_STL_ALGORITHM6

#include <iostream>

// find ����

// �˻����� : [first, last) ���� �������� ���� �˻� ����
//		     last �� �˻� ��� �ƴ�
// 
// ������ ǥ�� : �ݵ�� ������ �� �ʿ�� ����
//			    ++, ==, !=, * ������ ������ ��� Ÿ��

// ������ �̵� : ������ ++ ������

// ������ ��ȯ : last

template<typename T1, typename T2>
T1 find(T1  first, T1 last, T2 c)
{
	while (first != last && *first != c)
		++first;
	return first;
}

int main()
{
	double x[] = { 1,2,3,4,5,6,7,8,9,10 };


	double* p = find(x, x + 3, 5);


	if (p == x + 3)
		std::cout << "not found" << std::endl;
	else
		std::cout << "found : " << *p << std::endl;
}