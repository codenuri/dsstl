#include <iostream>
#include <thread>

// atomic

int x = 0; // ��������. ��� �����尡 ����

void foo()
{
	x = x + 1;

	// �� ������ �Ʒ� 3���� ���� �Դϴ�.
	__asm
	{
		mov eax, x
		add eax, 1
		mov x, eax 
	}

	// ��� #1. mutex ������ ����ȭ
	// => �ܼ� ������ ���� mutex ����� ������尡 ũ��.
	mutex.lock();
	x = x + 1;
	mutex.unlock();

	// ��� #2. CPU �� �����ϴ� ��� ���
	// => ��� �ٸ� �� ���
	// lock : ����CPU �����, �Ѱ��� CPU �� ����ϴ� �޸𸮸�
	//		 �ٸ� CPU �� �����Ҽ� ���� �ϴ� ��ɾ�. 
	__asm
	{
		lock inc x
 	}
}

int main()
{
	std::thread t1(&foo);
	std::thread t2(&foo);
	t1.join();
	t2.join();
}