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

	std::sort(v.begin(), v.end(), 
			[](const std::string& s1, const std::string& s2) 
			{ return s1.size() < s2.size(); } );


	show(v);
}




