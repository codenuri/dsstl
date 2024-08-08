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
	std::ifstream fin("2_map2.cpp"); // ���� ���� �̸� ��������

	std::string s;
	std::string word;
	int no = 0;

	std::map<std::string, std::list<int>> index; // �ٽ�
										// �ڷ� ���� ���� �����غ�����
	
	while (std::getline(fin, s))  // ���� ���� �����б�
	{
		++no;
		std::istringstream iss(s);

		while (iss >> word)	// ������ �ܾ�� �и�
		{
			index[word].push_back(no);
		}
	}
	// map �� ������ ȭ�鿡 ���!
	for (const auto& e : index)
	{
		// e ��  map �� ����̹Ƿ� pair �Դϴ�.!!
		
		std::cout << e.first << " : "; // �ܾ� ���

		show(e.second); // e.second �� list �̹Ƿ� show �� ��°���
	}

}


