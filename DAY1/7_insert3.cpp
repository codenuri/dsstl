#include <iostream>
#include <list>
#include <iterator>

// ���Թݺ�������

int main(int argc, char** argv)
{
	std::list<int> s1 = { 1, 2, 3, 4, 5 };
	std::list<int> s2 = { 0, 0, 0, 0, 0 };

	// #1. Ŭ���� ����
	std::back_insert_iterator< std::list<int>  > p1(s2);
	std::front_insert_iterator< std::list<int> > p2(s2);

	std::insert_iterator< std::list<int> > p3(s2,		// �����̳�
							std::next(s2.begin(), 2) );	// ������ ��ġ

	std::copy(s1.begin(), s1.end(), p3);

	for (auto& n : s2)
		std::cout << n << ", ";
}
