#include <vector>
#include <iostream>
#include <algorithm>
#include <list>
#include <string>
#include <fstream>
#include "show.h"

// 예제

int main()
{
	// 참고 : 단어, 문장 입력
//	std::cin >> s;  // "AB CD" 입력하면, "AB" 만 입력, 단어 입력
//	std::getline(std::cin, s); // 문장 입력


	std::vector<std::string> v;
	std::ifstream f("3_선형컨테이너7.cpp"); // 현재 파일이름

	std::string s;

	while (std::getline(f, s))
		v.push_back(s);
	//----------------------------

//	std::reverse(v.begin(), v.end()); // 상/하로 뒤집기

	// 좌/우로 뒤집어 보세요

	for (auto& s : v)
	{
//		std::reverse(s.begin(), s.end());

//		std::replace(s.begin(), s.end(), 'i', ' ');

		// 모든 모음을 공백으로!
		
	}


	//-------------------------------------
	for (auto& n : v)
		std::cout << n << std::endl;
}


