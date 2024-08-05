#include <iostream>

// Step 4. ���� generic �ϰ� - �ణ ����� �ܰ�

// �Ʒ� ó�� template �� �����
// 1. T* ��� ǥ���
// => "raw pointer" �� ���� �����մϴ�.
// => "raw pointer" �� �ƴ����� ������ ��Ȱ�� �ϴ� �ٸ� ���(����Ʈ������)
//    �� �����Ҽ� �����ϴ�.

// 2. ������ Ÿ�԰� ����� Ÿ���� �����˴ϴ�.
// => double �迭������ double �� �˻� �����մϴ�.
// => double �迭������ float, int ���� �˻��Ҽ� �����ϴ�.

// template<typename T>
// T* find(T*  first, T* last, T c)

template<typename T1, typename T2>
T1 find(T1  first, T1 last, T2 c)
{
	while (first != last && *first != c)
		++first;

	return first == last ? nullptr : first;
}

int main()
{
	double x[] = { 1,2,3,4,5,6,7,8,9,10 };

	double* p = find(x, x + 10, 5);


	if (p == nullptr)
		std::cout << "not found" << std::endl;
	else
		std::cout << "found : " << *p << std::endl;
}