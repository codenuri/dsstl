#include <iostream>
#include <list>   
#include <vector>

int main()
{
//	std::list<int> s = { 1,2,3,4,5 };
//	std::vector<int> s = { 1,2,3,4,5 };
	int s[] = {1,2,3,4,5};

	// �ݺ��ڸ� ������ ��

	// #1. C++98 ���� ���
	// ���� : �����̳� ����� �Ʒ� ���� �ڵ�� ����Ǿ�� �մϴ�.
	// => �ݺ��� Ÿ���̸��� ���� ������� ������
	// std::list<int>::iterator p1 = s.begin();

	// #2. C++11 ���� auto ����
	// ���� : �����̳� �����ص� �º� ����ȵ�
	// ���� : s�� �迭�̶�� ����
//	auto p2 = s.begin();


	// #3. ��� �Լ� begin �� �ƴ� �Ϲ� �Լ� begin ���

	auto p2 = std::begin(s); // s�� �迭�̶� ok.
							 // �� ��� p2 �� int*
}






