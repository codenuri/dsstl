#include <iostream> // ǥ�� ����� ��Ʈ��
#include <fstream>  // ȭ�� ��Ʈ��
#include <sstream>  // �޸�(��Ʈ��)��Ʈ��
#include <string>

/*
namespace std
{
	// #1. ǥ�� ����� ��Ʈ��
	class ostream {};
	class istream {};
	ostream cout;
	istream cin;

	// #2. ǥ�� ���� ����� ��Ʈ��
	class ofstream {};
	class ifstream {};

	// #3. ǥ�� �޸�(string) ��Ʈ��
	class ostringstream {};
	class istringstream {};
}
*/
int main()
{
	std::ofstream fout("a.txt");

	std::ostringstream oss;

	std::cout << "hello\n"; // ǥ�� ��¿� ����
	fout      << "hello\n"; // ���Ͽ� ����
	oss       << "hello\n"; // oss �� ���� ���� ����(�޸�, ���ڿ�)
							// �� ����

	std::string s = oss.str();

	std::cout << s; // "hello"
}
