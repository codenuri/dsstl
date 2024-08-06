#include <iostream>
#include <vector>
#include <algorithm>
#include "show.h"

int main()
{
	std::vector<int> v1 = { 1,2,3,4,5,6,7,8,9,10 };
	std::vector<int> v2;

	// �Ʒ� �ڵ�� �־��� �������� 3�� 0�� �����ϴ� �ڵ� �Դϴ�.
	std::replace(v1.begin(), v1.end(), 3, 0);

	// �� �ڵ带 �����ؼ� �Ʒ� �ּ� ó�� �����ϴ� �ڵ带 ����� ������

	// [v1.begin(), v1.end() ) ���� "Ȧ���� 0���� ������ �����"
	// v2 �� �־� ������


	show(v2); // 0, 2, 0, 4, 0, 6, 0, 8, 0, 10
}
