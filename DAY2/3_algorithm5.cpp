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
			// 3. BB, CC, AA, ,  <= 정답

	// std::remove 는 뒤의 요소를 앞으로 이동할때
	// => std::move 사용합니다.
	// => v[1] = std::move(v[3])
	// => v[1] = std::move("CC") 에서 
 	//    CC 문자열이 std::move 되므로 문자열 자원만 빼앗기게 된것


	// 위 코드를 이해 하려면 std::move 알아야 합니다.
	std::string s1 = "AA";
	std::string s2 = "AA";

	std::string s3 = s1;	// s1의 문자열을 s3으로 복사
	std::string s4 = std::move(s2); // s2 문자열을 s4로 이동
								    // s2 는 더이상 자원 없음
}


