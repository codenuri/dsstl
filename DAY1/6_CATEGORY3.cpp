#include <iostream>
#include <vector>
#include <list>
#include <iterator>

int main()
{
//	std::vector<int> s = { 1,2,3,4,5,6,7,8,9,10 };
	std::list<int> s = { 1,2,3,4,5,6,7,8,9,10 };

	auto p = s.begin();

	// �ݺ��� p�� 5ĭ �����ϰ� �ʹ�.
//	p = p + 5;	// p �� vector �ݺ��ڶ�� ok
				// p �� list   �ݺ��ڶ�� error

//	++p; ++p; ++p; ++p; ++p; // ��� ������ �ݺ��ڿ� ���ؼ� ����
							 // ������ ���������ΰ��� ��������.
	
	// �ּ��� �ڵ�
	std::advance(p, 5); // p�� ���������̸� + �� �̵�
						// �ƴϸ� "++" �� �̵�

	std::cout << *p << std::endl;


	p = s.begin();

	// std::advance vs std::next
	
	std::advance(p, 3);	// p ��ü�� �̵�

	auto p2 = std::next(p, 3); // p�� �̵�����.
							   // p���� 3ĭ ������ ���� �ݺ��� ��ȯ
}