#include <iostream>
#include <list>

// 1. DAY1.zip ���� Ǯ�� ������

// 2. DAY1.sln ���� Ŭ�� �Ͻø� "visual studio ���� ���� �ֽ��ϴ�.

// ���� �ϴ� �� : Ctrl + F5

// STL : Standard Template Library
// => C++ ǥ�� ���̺귯��

// C++98 : �ڷᱸ��(�����̳�)�� �˰��� ������ ���̺귯��

// C++11 : �ڷᱸ�� �� �˰��� �߰�, 
//         ����Ʈ ������, ��Ƽ ������, �ð�, �������� �پ��� �о��� Ŭ���� �߰�

// C++14/17 : filesystem, variant ���� ��� �о� Ŭ���� �߰�

// C++20 : range ���̺귯�� �߰�


int main()
{
	std::list<int> s = { 1,2,3,4,5 };

	s.push_back(6);
	s.push_back(7);

	for (auto e : s)
	{
		std::cout << e << std::endl;
	}
}