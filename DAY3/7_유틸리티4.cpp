#include <iostream> // 표준 입출력 스트림
#include <fstream>  // 화일 스트림
#include <sstream>  // 메모리(스트링)스트림
#include <string>

int main()
{
	double d = 3.1415;

	// d의 값을 "d = 값" 형태의 문자열로 만들어 보세요
	// std::ostringstream 사용하지 말고 해보세요

	char s[32];
//	sprintf(s, "d = %lf", d); // d의 정밀도에 따라 버퍼 오버플로우 가능성 있음
//	snprintf(s, 32, "d = %lf", d); //d의 정밀도에 따라 데이타 잘림.

	// C++ 스타일
	std::ostringstream oss;

	oss << "d = " << d;

	std::string ss = oss.str();
}
