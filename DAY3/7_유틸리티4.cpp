#include <iostream> // ǥ�� ����� ��Ʈ��
#include <fstream>  // ȭ�� ��Ʈ��
#include <sstream>  // �޸�(��Ʈ��)��Ʈ��
#include <string>

int main()
{
	double d = 3.1415;

	// d�� ���� "d = ��" ������ ���ڿ��� ����� ������
	// std::ostringstream ������� ���� �غ�����

	char s[32];
//	sprintf(s, "d = %lf", d); // d�� ���е��� ���� ���� �����÷ο� ���ɼ� ����
//	snprintf(s, 32, "d = %lf", d); //d�� ���е��� ���� ����Ÿ �߸�.

	// C++ ��Ÿ��
	std::ostringstream oss;

	oss << "d = " << d;

	std::string ss = oss.str();
}
