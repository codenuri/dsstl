#include <vector>
#include <iostream>
#include <algorithm>
#include "show.h"

int main()
{
	// 1. ����
	std::vector<int> v1;	// ��Ұ� ���� vector. ũ�� 0

	std::vector<int> v2(10);// 10���� 0���� 

	std::vector<int> v3(10, 3); // 10�� ��Ҹ� 3����
	std::vector<int> v4{10, 3}; // 2���� 10, 3����
	
	std::vector<int> v5(v3);	// v3�� �����ϰ�

	// �Ʒ� 3���� ��� �����մϴ�.
	std::vector<int> v6 = { 1,2,3 };
	std::vector<int> v7{ 1,2,3 };
	std::vector v8{ 1,2,3 }; // C++17 ����

	// 2. ����, 
	v1.push_front(0); // vector �� �ȵ�
	v1.push_back(0);
//	v1.insert(��ġ�� ��Ÿ���¹ݺ���, 0); // 
	v1.insert(std::next(s.begin(), 3), 0); // 

	// 3. ����
	v1.pop_front(); // vector �� �ȵ�
	v1.pop_back();
	v1.erase(�ݺ���);			// �� ��ġ ����
	v1.erase(�ݺ���A, �ݺ���B);  // [�ݺ���A, �ݺ���B) ����

	v1.clear(); // ��� ����

	// 4. ����
	int n1 = v1.front();
	int n2 = v1.back();
	int n3 = v1[1];   // list �ȵ�
	int n4 = v1.at(1);// list �ȵ�

	auto first = v1.begin();
	*first = 10; // �ݺ��ڷ� ����

	// 5. ��� ����
	v1.assign( v2.begin(), v2.end() );
				// v1�� ��� ��Ҹ� ��ü 

	// 6. ���� ���
	bool b = v1.empty();
	auto sz1 = v1.size();
	auto sz2 = v1.max_size();
	auto ax = v1.get_allocator();// v1�� ����ϴ� �޸� �Ҵ�� ���
}