#include <iostream>
#include <thread> 

void foo(int n, double d)
{
	std::cout << "foo" << std::endl;
}

class Test
{
public:
	void goo(int n, double d)
	{
		std::cout << "goo" << std::endl;
	}
};

int main()
{
	std::thread t(&foo, 1, 3.4); // �̼��� ���ο� ������ �����ǰ�
								 // foo(1, 3.4) �� �����մϴ�.
								 // ������ start �Լ� �ʿ� �����ϴ�.

	// �����带 ������ ��� �ݵ�� �Ʒ� 2���߿� �Ѱ��� �ؾ� �մϴ�.
	
	t.join();   // ������ ���� ���
				// pthread_join()
				
//	t.detach(); // ���ο� �����带 �ֽ������ �и�

	// ȣ�Ⱑ���� ��� �Լ��� ������� ���� �Ҽ� �ֽ��ϴ�

	Test test;
	std::thread t1( &Test::goo, &test, 1, 3.4 ); // ��� �Լ�
						// t.goo(1, 3.4)

	std::thread t2( [](int n) { std::cout << "lambda\n"; }, 0 );

	t1.join();
	t2.join();


}


