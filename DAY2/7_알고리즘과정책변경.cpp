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

int main()
{
	std::vector<int> v1 = { 1,2,3,4,5,6,7,8,9,10 };

	int n1 = std::accumulate(v1.begin(), v1.end(), 0);

	std::cout << n1 << std::endl;

}
