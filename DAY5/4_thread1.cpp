#include <iostream>
#include <thread> // C++11 ���� �����ϴ� ���
#include <chrono>
using namespace std::literals;

// this_thread namespace 
// => 4���� ��ƿ��Ƽ�� �Լ� ����

int main()
{
	std::cout << std::this_thread::get_id() << std::endl;

//	std::this_thread::sleep_for(�ð�); // �ð� ���� ����
//	std::this_thread::sleep_until(�ð�); // �ð� ���� ����


	std::this_thread::sleep_for(3s); 

	std::this_thread::yield(); // ���� �������� ������ ����ð� ����
}


