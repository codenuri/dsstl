// github.com/codenuri/dsstl  ���� DAY2.zip  �����ø� �˴ϴ�.

#include <iostream>
#include <iterator>
#include <list>

int main()
{
	int n = 10;

	// ȭ�� ��� #1. std::cout ���
	std::cout << n << std::endl;


	// ȭ�� ��� #2. std::ostream_iterator ���

	std::ostream_iterator<int> p1(std::cout, ", ");


	std::list<int> s = { 1, 2, 3 };


}


