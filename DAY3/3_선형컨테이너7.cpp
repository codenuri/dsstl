#include <vector>
#include <iostream>
#include <algorithm>
#include <list>
#include <string>
#include <fstream>
#include "show.h"

// ����

// ���� ǥ���� ���� �Լ� ��ü�� ���� ����� ����
// ���� ��쵵 ���� �ֽ��ϴ�.

class FindChar
{
	std::string data;
public:
	FindChar(const std::string& s) : data(s) {}

	bool operator()(char c) const
	{
		auto ret = std::find(data.begin(), data.end(), c);

		return ret != data.end();
	}
};



int main()
{
	// ���� : �ܾ�, ���� �Է�
//	std::cin >> s;  // "AB CD" �Է��ϸ�, "AB" �� �Է�, �ܾ� �Է�
//	std::getline(std::cin, s); // ���� �Է�


	std::vector<std::string> v;
	std::ifstream f("3_���������̳�7.cpp"); // ���� �����̸�

	std::string s;

	while (std::getline(f, s))
		v.push_back(s);
	//----------------------------

//	std::reverse(v.begin(), v.end()); // ��/�Ϸ� ������

	// ��/��� ������ ������

	for (auto& s : v)
	{
//		std::reverse(s.begin(), s.end());

//		std::replace(s.begin(), s.end(), 'i', ' ');

		// ��� ������ ��������!
//		FindChar fc("aeiouAEIOU");
//		bool b = fc('A');

		FindChar fc("0123456789");

		std::replace_if(s.begin(), s.end(), fc, ' ');
		
	}


	//-------------------------------------
	for (auto& n : v)
		std::cout << n << std::endl;
}


