#include <iostream>
#include <string>		// C++98
#include <string_view>  // C++17 ���� �߰�

// string      : ���ڿ� ����
// string_view : ���ڿ� ���� ����(const char* �� size �� ������ Ÿ��)

int main()
{
	std::string s = "to be or not to be";

	// #1. string vs string_view
	std::string      ss1 = s;
	std::string_view sv1 = s;
	
	printf("s   buffer : %p\n", s.data());
	printf("ss1 buffer : %p\n", ss1.data());
	printf("sv1 buffer : %p\n", sv1.data());



	// #2. literal �ʱ�ȭ
	std::string      ss2 = "practice make best";
	std::string_view sv2 = "practice make best";
}