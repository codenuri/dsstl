#include <iostream>

// Step 2. 검색 구간의 일반화
// => 부분 문자열 검색도 가능하게
// => [first, last) 구간에서 선형 검색
// => "반 개행 구간(half open range)"
char* strchr(char* first, char* last, int c)
{
	while (first != last && *first != c)
		++first;

	return first == last ? nullptr : first;
}

int main()
{
	char s[] = "abcdefgh";

	char* p = strchr(s, s + 4, 'c');

	if (p == nullptr)
		std::cout << "not found" << std::endl;
	else
		std::cout << "found : " << *p << std::endl;
}