#include <vector>
#include <list>
#include <iostream>
#include <algorithm>
#include "show.h"

// �����̳ʸ� �����ϴ� �����̳�
// => �پ��� ������ �ڷᱸ���� ���ϰ� ����� �ֽ��ϴ�.
int main()
{
	std::vector<int> v1(10, 0);
	v1[0] = 10;

	std::vector< std::vector<int> > v2(10,  std::vector<int>(10));
	
	v2[0][1] = 10;

	std::vector<std::list<int>> v3(10);
	
}