#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <string>
#include "show.h"

int main()
{
	std::vector<std::string> v = { "AA", "BB", "AA", "CC" };

	auto p = std::remove(v.begin(), v.end(), "AA");

	show(v); // ��� ������ ������
			// 1. BB, CC, AA, CC
	        // 2. BB, CC, , 
			// 3. BB, CC, AA, ,  <= ����

	// std::remove �� ���� ��Ҹ� ������ �̵��Ҷ�
	// => std::move ����մϴ�.
	// => v[1] = std::move(v[3])
	// => v[1] = std::move("CC") ���� 
 	//    CC ���ڿ��� std::move �ǹǷ� ���ڿ� �ڿ��� ���ѱ�� �Ȱ�


	// �� �ڵ带 ���� �Ϸ��� std::move �˾ƾ� �մϴ�.
	std::string s1 = "AA";
	std::string s2 = "AA";

	std::string s3 = s1;	// s1�� ���ڿ��� s3���� ����
	std::string s4 = std::move(s2); // s2 ���ڿ��� s4�� �̵�
								    // s2 �� ���̻� �ڿ� ����
}


