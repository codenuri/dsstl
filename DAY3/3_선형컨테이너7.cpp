#include <vector>
#include <iostream>
#include <algorithm>
#include <list>
#include <string>
#include <fstream>
#include "show.h"

// 예제

// 람다 표현식 보다 함수 객체를 직접 만드는 것이
// 편리한 경우도 많이 있습니다.

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
//		FindChar fc("aeiouAEIOU");
//		bool b = fc('A');

		FindChar fc("0123456789");

		std::replace_if(s.begin(), s.end(), fc, ' ');
		
	}


	//-------------------------------------
	for (auto& n : v)
		std::cout << n << std::endl;
}


