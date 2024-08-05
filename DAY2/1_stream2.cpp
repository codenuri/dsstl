// github.com/codenuri/dsstl  에서 DAY2.zip  받으시면 됩니다.

#include <iostream>
#include <iterator>
#include <list>

int main()
{
	std::ostream_iterator<int> p1(std::cout, ", ");
	std::istream_iterator<int> p2(std::cin);

//	int n = *p2; // std::cin >> n;
//	std::cout << n << std::endl;

	// 위 2줄은 아래 처럼 표현 가능합니다.
	*p1 = *p2;
}


