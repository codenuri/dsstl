#include <iostream>

class S
{
public:
	S(const char* s)
	{
		std::cout << "S() ȣ���\n";
	}
};

void foo(const S& s) {}

int main()
{
//	S s("AA");
//	foo(s);

	foo("AA");
		// => S ������ �䱸�ϴµ�, ���ڴ� ���ڿ�!!!
		// => S�� �����ڰ� ���ڿ��� ������ �����Ƿ�
		// => S�� �����ڿ� ���ڿ��� ������ �ӽð�ü ����!!
		// => �ӽð�ü�� foo �� ����
}