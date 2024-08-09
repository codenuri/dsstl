#include <iostream>
#include <thread>
#include <future> 
#include <chrono>
using namespace std::chrono;
using namespace std::literals;

// promise & future

// �Ϲ� �Լ� : ��ȯ ������ ����� �˷� �ݴϴ�
// => ������, �Ʒ� Add �� ������� �����ϸ� 
//    �ֽ����忡�� ����� ������ �����ϴ�.
// => �پ��� ����� ������ ���ô�.
int Add(int a, int b)
{
	std::this_thread::sleep_for(5s);

	return a + b;
}

int main()
{
	std::thread t(&Add, 1, 2);
						
	t.join();
}


