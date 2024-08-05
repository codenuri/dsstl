#include <iostream>

// Step 5. ���н� ��ȯ��
// => nullptr ��� last ��ȯ

// 1. last �� �˻������ �ƴϹǷ� �˻� ������ last �� ���ü��� ����
// 2. last �� ���� �˻� ������ ������ ��Ÿ���Ƿ� Ȱ�뵵�� ����.
// 3. find ���� ��ü�� �ణ ��������.(�Ʒ� ����)

template<typename T1, typename T2>
T1 find(T1  first, T1 last, T2 c)
{
	while (first != last && *first != c)
		++first;
	return first;// == last ? nullptr : first;
}

int main()
{
	double x[] = { 1,2,3,4,5,6,7,8,9,10 };


	double* p = find(x, x + 3, 5);


	if (p == x+3)
		std::cout << "not found" << std::endl;
	else
		std::cout << "found : " << *p << std::endl;
}