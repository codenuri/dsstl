#include <vector>
#include <iostream>
#include <algorithm>
#include "show.h"

// capacity ����
int main()
{
	std::vector<int> v(10, 0);

	v.resize(7); // ��� ����������� ?
				 // => �޸� ���Ҵ� ����. 10�� ��� ���
				 // => size ������ 7�� ����

	std::cout << v.size() << ", " << v.capacity() << std::endl;

	
}




