#include <iostream>
#include <unordered_set>
#include "show.h"

// set           : tree ( 균형잡힌 2진 tree, red black tree), C++98
// unordered_set : hash, C++11 에서 추가

int main()
{
	// C++ 표준 해쉬 함수( 함수객체로 되어 있습니다. )
	std::hash<int> hi;
	std::hash<double> hd;
	std::hash<std::string> hs;

	std::cout << hi(50) << std::endl;
	std::cout << hd(3.4) << std::endl;
	std::cout << hs("hello") << std::endl;


	// 해쉬 함수는 같은 값을 전달하면 반드시 같은 결과(바구니번호)
	// 가 나와야 합니다.
	std::cout << hi(50) << std::endl;
}

