#include <iostream> // ǥ�� ����� ��Ʈ��
#include <fstream>  // ȭ�� ��Ʈ��
#include <sstream>  // �޸�(��Ʈ��)��Ʈ��
#include <string>

int main()
{
	std::ostringstream oss; // �޸� ���
	std::istringstream iss("to be or not to be");

	std::string s;

//	std::cin >> s; // ǥ�� �Է¿��� �Ѵܾ� �Է�
//	iss      >> s; // iss ����     �Ѵܾ� �Է�
//	std::cout << s; // to

	while ( iss >> s )
		std::cout << s << std::endl;
}
