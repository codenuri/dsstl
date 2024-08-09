#include <iostream>
#include <thread>
#include <future> 
#include <chrono>
using namespace std::chrono;
using namespace std::literals;


// ��� #2. promise & future ��� ���
// => �����尣 ������ ����� �����ϱ� ����
// => C++ ǥ�� ���


// promise future �� 1ȸ���Դϴ�.
// 
// ������ ��� �Ϸ��� 
// => std::condition_variable �� ���� �����ؾ� �մϴ�.
// => ������ �ڵ尡 �˴ϴ�.


void Add(int a, int b, std::promise<int>& p )
{
	try
	{
		std::this_thread::sleep_for(5s);

		p.set_value(a + b); // ������ ���(int ��)�� �ֽ����忡��!
	}
	catch (...)
	{
		// �� ���ȿ��� �߻��� ���ܸ� �ֽ����� ������ ���޵� ����
		p.set_exception(std::current_exception());
	}
	// ......
}

int main()
{
	// #1. ��Ӱ�ü�� �����, �̷��� ����� ���� future �� �����ϴ�.
	std::promise<int> p;

	std::future<int> ft = p.get_future();

	// #2. ������ ������ "promise" �� ������ ����

	std::thread t(&Add, 1, 2, std::ref(p));

	// �ֽ������ �ٸ� �۾��� �ϴٰ� ����� �ʿ� �Ҷ�
	
	std::cout << "main �ٸ��۾� " << std::endl;
	
	// future ���� ������ �˴ϴ�.

	int ret = ft.get(); // ����� ������ ��� ������
						// ������ ��� �մϴ�.
						// ft.wait_for()

	std::cout << "��� : " << ret << std::endl;


	t.join(); // ������ ��ü�� ������ ���


}


