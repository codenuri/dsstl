// github.com/codenuri/dsstl  ���� DAY2.zip  �����ø� �˴ϴ�.

#include <iostream>
#include <iterator>
#include <list>

int main()
{
	std::ostream_iterator<int> p1(std::cout, ", ");
	std::istream_iterator<int> p2(std::cin);

	int n = *p2; // std::cin >> n;

	std::cout << n << std::endl;
}


