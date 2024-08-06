#include <iostream>
#include <vector>
#include <algorithm>
#include "show.h"

int main()
{
	std::vector<int> v1 = { 1,2,3,4,5,6,7,8,9,10 };
	std::vector<int> v2 = { 0,0,0,0,0,0,0,0,0,0 };
	
	// #1. inplace, value ����
//	auto p1 = std::remove(v1.begin(), v1.end(), 3);


	// #2. inplace, predicator ����
	// xxx_if ���� : ������ ���ڰ� value �� �ƴ� predicator

//	auto p2 = std::remove_if(v1.begin(), v1.end(), 
//						[](int n) { return n % 3 == 0; }) ;


	// #3. copy, value ����
	// p3 : v2 �� ��ȿ���� ���� ������ 1��° ��Ҹ� ����Ű�� �ݺ���
	//      (������ ��ҵ��� ������ ����Ű�� �ݺ���)

	// v1 => v2 ������ remove(v2) �ϴ� �ͺ��� �Ʒ� ó���ϸ� 2�� �������
	// ������ sort_copy() �� copy �� sort �ϴ� �Ϳ� ���� ū ���� �����ϴ�
	// �׷��� sort_copy �� �����ϴ�.
//	auto p3 = std::remove_copy(v1.begin(), v1.end(), v2.begin(), 3);


	// #4. copy, predicator ����
	auto p4 = std::remove_copy_if(v1.begin(), v1.end(), v2.begin(), 
					[](int n) { return n % 3 == 0; } );



	show(v1);
	show(v2);
}
