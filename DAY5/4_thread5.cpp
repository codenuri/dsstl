#include <iostream>
#include <thread>
#include <future> 
#include <chrono>
using namespace std::chrono;
using namespace std::literals;

// �Ʒ� Add �� �����带 ������� ���� �Լ� �Դϴ�.
// => promise & future �𵨷� �����Ϸ��� �ڵ� ������ �ʿ� �մϴ�.

// async : ���� �Լ��� �ڵ带 �������� �ʰ�
//         ��Ƽ������� ������ ����� ������ ���

int Add(int a, int b)
{
	std::this_thread::sleep_for(5s);

	return a + b;
}

int main()
{
	std::future<int> ft = std::async(&Add, 1, 2);

	std::cout << "�ֽ������ �ٸ� �۾�....\n";

	int ret = ft.get();

	std::cout << "��� : " << ret << std::endl;
}


