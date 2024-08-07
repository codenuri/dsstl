#include <iostream>
#include "show.h"

template<typename T, typename U>
struct pair
{
	T first;
	U second;
	// �����ڵ��� �ֽ��ϴ�.
};
int main()
{
	// pair : ���δٸ� Ÿ�� 2���� �����ϴ� ����ü
	std::pair<int, double> p1(1, 3.4);

	std::cout << p1.first  << std::endl;
	std::cout << p1.second << std::endl;

	// pair ��ü�� ���� ����� �ִ� make_pair ����
	auto p2 = std::make_pair(1, 3.4);


	// C++17 ���ʹ� Ÿ�� ��������
	std::pair p3(1, 3.4);
}


