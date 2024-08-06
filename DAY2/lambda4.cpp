#include <iostream>
#include <algorithm>
#include <vector>
#include <functional> 

int main()
{
	std::vector<int> v = { 1,3,5,7,9,2,4,6,8,10 };

	// �Ʒ� 3���� ���غ�����. ���� �ڵ�? ���� �ڵ� ?
	// => ������ ���� ǥ���������� ��� �ٸ� Ÿ��
	// => ������ sort �Լ��� 3��!!
	std::sort(v.begin(), v.end(), [](int a, int b) {return a < b; });
	std::sort(v.begin(), v.end(), [](int a, int b) {return a < b; });
	std::sort(v.begin(), v.end(), [](int a, int b) {return a < b; });


	// �ذ�å #1. auto ������ ��Ƽ� ���
	auto cmp = [](int a, int b) {return a < b; };

	std::sort(v.begin(), v.end(), cmp);
	std::sort(v.begin(), v.end(), cmp);
	std::sort(v.begin(), v.end(), cmp);


	// �ذ�å #2. < ������ �����ϴ� �Լ� ��ü�� �̹�  ǥ�ؿ� �ִ�.

	std::less<int> f;
	std::sort(v.begin(), v.end(), f);
	std::sort(v.begin(), v.end(), f);
	std::sort(v.begin(), v.end(), std::less<int>{}); // �̷��� �ص�
												// ���� ���� sort


}









