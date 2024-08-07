#include <iostream> // 표준 입출력 스트림
#include <fstream>  // 화일 스트림
#include <sstream>  // 메모리(스트링)스트림
#include <string>

int main()
{
	std::ostringstream oss; // 메모리 출력
	std::istringstream iss("to be or not to be");

	std::string s;

//	std::cin >> s; // 표준 입력에서 한단어 입력
//	iss      >> s; // iss 에서     한단어 입력
//	std::cout << s; // to

	while ( iss >> s )
		std::cout << s << std::endl;
}
