#include <iostream>
#include <thread>
#include <atomic>


//int x = 0; // ��������. ��� �����尡 ����

std::atomic<int> x = 0;

void foo()
{
	x.fetch_add(1); // "lock inc x" ���� ������� ����

	++x; // ���� ����

}

int main()
{
	std::thread t1(&foo);
	std::thread t2(&foo);
	t1.join();
	t2.join();
}