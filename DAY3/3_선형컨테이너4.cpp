#include <vector>
#include <iostream>
#include <algorithm>
#include "show.h"

// capacity ����
int main()
{
//	std::vector<int> v(10, 0);

	std::vector<int, debug_alloc<int> > v(10, 0);

	v.resize(7); // ��� ����������� ?
				 // => �޸� ���Ҵ� ����. 10�� ��� ���
				 // => size ������ 7�� ����

	std::cout << v.size() << ", " << v.capacity() << std::endl;

	v.push_back(0); // ���� �Ѱ� �߰�
					// => ���� ���´� size < capacity �̹Ƿ�
					// => �� ������ "not expensive"
					// => �޸� ���Ҵ� ����.					

	std::cout << v.size() << ", " << v.capacity() << std::endl;
			
	v.shrink_to_fit(); // �ʿ���� ������ �޸� ����
					   // => 8�� �޸� ���Ҵ��ϰ�
					   // => 10�� �޸𸮴� ����
					   // => ��, ���� ��ü�� �����

	std::cout << v.size() << ", " << v.capacity() << std::endl;

	v.push_back(0); // ���� �Ѱ� �߰�
					// => ���� ���´� size == capacity ����
					// => �޸� ���Ҵ� �ʿ�
					// => "expensive"

					// g++ : ���� capacity * 2 �� �Ҵ�
					// visual studio : ���� capacity * 1.5

	std::cout << v.size() << ", " << v.capacity() << std::endl;
					// 9,			 12
	
	v.clear();	// ���� �޸𸮸� �����ұ�� ??
				// => size �� 0����
				// => �޸� ���� ����
				// => �����Ϸ��� shrink_to_fit() ���


	std::cout << v.size() << ", " << v.capacity() << std::endl;
					// 0			12

	v.shrink_to_fit();

	std::cout << v.size() << ", " << v.capacity() << std::endl;
}




