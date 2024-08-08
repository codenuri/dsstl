#include <iostream>
#include <unordered_set>
#include "show.h"

// set           : tree ( �������� 2�� tree, red black tree), C++98
// unordered_set : hash, C++11 ���� �߰�

int main()
{
	// C++ ǥ�� �ؽ� �Լ�( �Լ���ü�� �Ǿ� �ֽ��ϴ�. )
	std::hash<int> hi;
	std::hash<double> hd;
	std::hash<std::string> hs;

	std::cout << hi(50) << std::endl;
	std::cout << hd(3.4) << std::endl;
	std::cout << hs("hello") << std::endl;


	// �ؽ� �Լ��� ���� ���� �����ϸ� �ݵ�� ���� ���(�ٱ��Ϲ�ȣ)
	// �� ���;� �մϴ�.
	std::cout << hi(50) << std::endl;
}

