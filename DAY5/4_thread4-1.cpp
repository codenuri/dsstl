#include <iostream>
#include <thread>
#include <future> 
#include <chrono>
using namespace std::chrono;
using namespace std::literals;


// ��� #1. out parameter ���
// => ������ �Լ����� ������ ������ ����� ����ϴ� ���� �ƴ϶�
// => ������ ��ü�� ���Ḧ ����ϰ� �ȴ�.
// => ���� �Ϸ�� ��� �˷��ټ� ������ ??

void Add(int a, int b, int& s)
{
	std::this_thread::sleep_for(5s);
	s = a + b;
}

int main()
{
	int ret = 0;

	std::thread t(&Add, 1, 2, std::ref(ret) );

	t.join();

	std::cout << "��� : " << ret << std::endl;
}


