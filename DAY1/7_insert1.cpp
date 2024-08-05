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
	 
	
	// #1. C++17 ���ʹ� �Ʒ� ó��
//	std::back_insert_iterator p(s); // p �� s ���� �߰��ϴ� �ݺ���
									

	// #2. C++14 ������ ���ø� ���� �ʿ�
//	std::back_insert_iterator< std::list<int> > p(s); // C++14�� Ÿ������ �ʿ�


	// #3. back_insert_iterator<> Ŭ������ ���� ������� ����
	//     back_insert_iterator ��ü�� ����� ���� �Լ� ���
	// => insert0 ���� ��� "object generator" ����� ���� �Լ�

	auto p = std::back_inserter(s);



	*p = 20; // s.push_back(20);
	*p = 30; // s.push_back(30);

	for (auto e : s)
	{
		std::cout << e << ", ";
	}

}
