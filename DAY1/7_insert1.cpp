#include <iostream>
#include <list>
#include <iterator>

int main(int argc, char** argv)
{
	std::list<int> s = { 1, 2, 3, 4, 5};

	// �����̳��� ���� ���� �ϴ� ���

	// #1. push_back ���
	s.push_back(10);


	// #2. ���Թݺ��� ���
	std::back_insert_iterator p(s); // p �� s ���� �߰��ϴ� �ݺ���

	*p = 20; // s.push_back(20);

}
