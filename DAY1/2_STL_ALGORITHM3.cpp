#include <iostream>

// Step 3. �˻� ��� Ÿ���� �Ϲ�ȭ
// => template ���
// => �Լ� �̸� ���� : strchr => find

template<typename T>
T* find(T* first, T* last, T c)
{
	while (first != last && *first != c)
		++first;

	return first == last ? nullptr : first;
}

int main()
{
	double x[] = { 1,2,3,4,5,6,7,8,9,10 };

	// ���� 10 �� �迭�� ������ ��Ҵ� x+9 ������
	// => x, x+9 �� �����ϸ� ������ ��Ҵ� �˻� ��� �ƴ�
	// => ��ü �˻� �Ϸ��� ������ ��������� �ּ� ����(x+10)

	double* p = find(x, x + 10, 5.0);


	if (p == nullptr)
		std::cout << "not found" << std::endl;
	else
		std::cout << "found : " << *p << std::endl;
}