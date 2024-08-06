#include <iostream>
#include <list>
#include <algorithm>

int main()
{
	std::list<int> s = { 1,2,3,4,5,6,7,3,9,10 };

	// �����̳ʿ��� ������ �ݺ��ڴ� 4�� ������ �ֽ��ϴ�.

	// #1. �⺻��
	std::list<int>::iterator p1 = s.begin(); // std::begin(s);

	// #2. ��� �ݺ���
	std::list<int>::const_iterator p2 = s.cbegin(); // std::cbegin(s);
//	*p2 = 10; // error. ��� �ݺ��ڴ� �б⸸ ����

	// #3. reverse �ݺ���
	std::list<int>::reverse_iterator p3 = s.rbegin(); // std::rbegin(s);

	// #4. const reverse �ݺ���
	std::list<int>::const_reverse_iterator p4 = s.crbegin(); 
										// std::crbegin(s);

}
