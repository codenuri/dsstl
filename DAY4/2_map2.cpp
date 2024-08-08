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
	std::ifstream fin("2_map2.cpp"); // 현재 파일 이름 넣으세요

	std::string s;
	std::string word;
	int no = 0;

	std::map<std::string, std::list<int>> index; // 핵심
										// 자료 구조 형태 생각해보세요
	
	while (std::getline(fin, s))  // 파일 에서 한줄읽기
	{
		++no;
		std::istringstream iss(s);

		while (iss >> word)	// 문장을 단어로 분리
		{
			index[word].push_back(no);
		}
	}
	// map 의 내용을 화면에 출력!
	for (const auto& e : index)
	{
		// e 는  map 의 요소이므로 pair 입니다.!!
		
		std::cout << e.first << " : "; // 단어 출력

		show(e.second); // e.second 는 list 이므로 show 로 출력가능
	}

}


