#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>
#include <string>
#include <functional>
#include "show.h"

// projection ����

int main()
{
	std::vector<std::string> v = { "AAAA", "DD", "C", "BBBBB" };
	
//	std::sort( v.begin(), v.end() );
				// => "<" �������� ����
				// => ���������� ����

	// ���ڿ��� ������ �������� ������ ������

	// C++98 : �� �Լ��� ���ڰ� 2�� �̴�.
	std::sort(v.begin(), v.end(), 

			[](const std::string& s1, const std::string& s2) 
			{ return s1.size() < s2.size(); } );

	// PYTHON : �� �Լ��� ���ڰ� �Ѱ� �̴�.
	// => 2���� ��Ҹ� ���Ҷ�
	// => ���Լ�(1st) < ���Լ�(2nd) �� ��

	/*
	std::sort(v.begin(), v.end(),
		[](const std::string& s) { return s1.size(); } );
	*/

	// C++20 : �� 2�� ������ ���ļ� ���� �߽��ϴ�.
	// => ���� �ҽ�����



	show(v);
}




