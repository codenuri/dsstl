// 3_�˰������å����
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>    // ��ġ ���� ����
#include <functional>
#include "show.h"

// <algorithm> ���
// => ����, �˻�, ����, ���� �˻����� "��ǻ�� �˰���" ���� ���

// <numeric> ���
// => ��, �κ���, ���� ���� ��ġ ���� ���

// <memory>
// => �޸� ����, ��� �ʱ�ȭ��..

int mul(int a, int b) { return a * b; }

int main()
{
	std::vector<int> v1 = { 1,2,3,4,5,6,7,8,9,10 };

//	int n1 = std::accumulate(v1.begin(), v1.end(), 0);
							// => �����Լ� ������ "+" �� ����.

//	int n1 = std::accumulate(v1.begin(), v1.end(), 1, mul);
							// => ���� �Լ� ���� ����. 
							// => �Ϲ� �Լ� ���������Ƿ� �ζ��� ġȯ �ȵ�


	int n1 = std::accumulate(v1.begin(), v1.end(), 1, 
										std::multiplies<int>{} );
							// => �Լ� ��ü ����
							// => +,-,*,/ ���� ������ �����ϴ�
							//    �Լ� ��ü�� �̹� ǥ�ؿ� �ֽ��ϴ�.
							//    cppreference.com ����

	std::cout << n1 << std::endl;

}
