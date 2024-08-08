#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <list>
#include <map>
#include <algorithm>
#include "show.h"

int main()
{
	std::ifstream fin("4_unordered_map2.cpp"); // ���� ���� �̸� ��������

	std::string s;
	std::string word;
	int no = 0;

//	std::map<std::string, std::list<int>> index; 
	std::unordered_map<std::string, std::list<int>> index;

	while (std::getline(fin, s)) 
	{
		++no;
		std::istringstream iss(s);

		while (iss >> word)	// ������ �ܾ�� �и�
		{
			index[word].push_back(no);
		}
	}
	for (const auto& e : index)
	{
		std::cout << e.first << " : "; // �ܾ� ���

		show(e.second);
	}

}


