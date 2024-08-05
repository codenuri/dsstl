// github.com/codenuri/dsstl  에서 DAY2.zip  받으시면 됩니다.

#include <iostream>
#include <iterator>
#include <list>

int main()
{
	int n = 10;

	// 화면 출력 #1. std::cout 사용
	std::cout << n << std::endl;


	// 화면 출력 #2. std::ostream_iterator 사용

	std::ostream_iterator<int> p1(std::cout, ", ");

	*p1 = 10; // std::cout << 10 << ", "
	*p1 = 20;


	std::list<int> s = { 1, 2, 3 };

	std::copy(s.begin(), s.end(), p1);
				// => list 의 모든 요소를 화면 출력

}


