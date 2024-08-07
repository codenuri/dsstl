#include <tuple>
#include <iostream>

int main()
{
	// pair : C++98. ���� �ٸ� Ÿ���� ��ü 2�� ����
	std::pair<int, double> p1(3, 3.4);

	// pair �� 3�� ���������մϴ�
	std::pair<int, std::pair<double, char> > p2(1, { 3.4, 'A' } );

	std::cout << p2.second.second << std::endl; // 'A' ����� ������

	
	// C++11 ���� pair �� ���������� ����Ҽ� �ִ� tuple ����
	std::tuple<int, double, char> t1(1, 3.4, 'A');


	// ��� ������ std::get

	double d = std::get<1>(t1); // 3.4
}