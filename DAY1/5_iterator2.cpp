#include <iostream>
#include <list>
#include <filesystem> // C++17 ���� �߰�

// �ݺ��� ���� : �ݺ���ó�� �����ϴ� ������ �ݺ��ڴ�. 
//			    ++ �� �̵������ϰ�, *�� ��� ������ �����ϸ� ��� �ݺ���

// �ݺ��� ����(iterator)
// 1. �����̳ʿ��� ������ �ݺ���( c.begin() )
// 2. Raw Pointer 
// 3. ���������� ���� ����ϴ� �ݺ��ڵ� �ִ�( main ����)

int main()
{
	std::filesystem::directory_iterator p("C:\\windows");

	std::cout << *p << std::endl;
	++p;
	std::cout << *p << std::endl;
}










