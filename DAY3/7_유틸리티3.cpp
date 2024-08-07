#include <iostream> // 표준 입출력 스트림
#include <fstream>  // 화일 스트림
#include <sstream>  // 메모리(스트링)스트림
#include <string>

/*
namespace std
{
	// #1. 표준 입출력 스트림
	class ostream {};
	class istream {};
	ostream cout;
	istream cin;

	// #2. 표준 파일 입출력 스트림
	class ofstream {};
	class ifstream {};

	// #3. 표준 메모리(string) 스트림
	class ostringstream {};
	class istringstream {};
}
*/
int main()
{
	std::ofstream fout("a.txt");

	std::ostringstream oss;

	std::cout << "hello\n"; // 표준 출력에 쓰기
	fout      << "hello\n"; // 파일에 쓰기
	oss       << "hello\n"; // oss 가 가진 내부 버퍼(메모리, 문자열)
							// 에 쓰기

	std::string s = oss.str();

	std::cout << s; // "hello"
}
