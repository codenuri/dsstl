#include <iostream>
#include <algorithm>
#include <vector>
#include <functional> // std::less<>, std::greater<> �� �����ֽ��ϴ�.

inline bool cmp1(int a, int b) { return a < b; }

int main()
{
	std::vector<int> v = { 1,3,5,7,9,2,4,6,8,10 };

	// std::sort ����

	// #1. �� ��å�� �������� �ʴ� ��� - ���� ����
	std::sort( v.begin(), v.end() ); // 1, 2, 3, 4, 5, ...


	// #2. ����å�� �����ϴ� ��� - 3��° ���ڷ� ��������������


	// #2-1. �Ϲ��Լ� ����
	std::sort(v.begin(), v.end(), cmp1); 
								// => �Ϲ� �Լ� ����
								// => �ζ��� ġȯ �ȵ�. 
								// => ����Ÿ ���� ������ ��������!


	// #2-2. �Լ� ��ü ����(C++ ǥ�� �Լ� ��ü)
	std::less<int> f1;		// 1st_arg < 2nd_arg
	std::greater<int> f2;	// 1st_arg > 2nd_arg

	std::sort(v.begin(), v.end(), f1);
							// => �Լ���ü ����
							// => �ζ��� ġȯ��.

	std::sort(v.begin(), v.end(), std::greater<int>{} );
							// => �ӽð�ü�� ����


	// #2-3. ���� ǥ�������� ����
	std::sort(v.begin(), v.end(), 
				[](int a, int b) {return a < b; } );
							// => ���� ǥ�������� ����(C++11����)
							// => �ζ��� ġȯ ��..


}









