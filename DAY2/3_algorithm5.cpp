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

	show(v); // 결과 예측해 보세요
			// 1. BB, CC, AA, CC
	        // 2. BB, CC, , 
			// 3. BB, CC, AA,   <= 정답

	// 위 코드를 이해 하려면 std::move 알아야 합니다.
	std::string s1 = "AA";
	std::string s2 = "AA";
	std::string s3 = s1;
	std::string s4 = s2;
}


