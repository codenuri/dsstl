// 3_�Լ���ü1
#include <iostream>

struct Plus
{
	int operator()(int a, int b)
	{
		return a + b;
	}
};

int main()
{
	Plus p; // p �� �Լ��� �ƴ� plus ��� Ÿ���� ��ü �Դϴ�.

	int n = p(1, 2); // ��ü�� p�� �Լ�ó�� ����մϴ�.
					 // => �Լ���ü(function object) ��� �մϴ�.
				
	int n2 = p.operator()(1, 2); // �̷��� ���� ȣ���ص� �˴ϴ�.

	// a + b; // a.operator+(b)
	// a - b; // a.operator-(b)
	// a();   // a.operator()()
	// a(1,2);// a.operator()(1,2)
}
