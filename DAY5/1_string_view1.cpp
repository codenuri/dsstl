#include <iostream>
#include <string>
#include "show.h"

// std::string �� ���� 
// SSO ( small string optimization )
// => ���̰� �� ���ڿ��� ���� �����ϰ�
// => ���̰� ���� ���ڿ��� string ��ü ���ο� ����
// => ���� 16�� ������ ��������

using mystring = std::basic_string<char, std::char_traits<char>,
					debug_alloc<char>>;

int main()
{
//	mystring s1 = "to be or not to be";

	mystring s1 = "hello";

	
	std::cout << s1.size() << ", " << s1.capacity() << std::endl;
}

