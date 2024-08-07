#include <iostream>

class Point
{
public:
	int x, y;

	Point(int x, int y) : x(x), y(y) {}

	void set(int a, int b)
	{
		x = a;
		y = b;
	}
	void print() const 
	{
//		x = 10; // error. ��� ��� �Լ������� 
				// ��� ����Ÿ ���� �����Ҽ� ����.

		std::cout << x << ", " << y << std::endl;
	}
};

int main()
{
//	Point p(1, 2);
	const Point p(1, 2); // ��� ��ü

	// p �� �����ü�Դϴ�. �Ʒ� 3���� ������ ���ô�.
	p.x = 10;		// error. x �� public ������, p �� ��� ��ü�̹Ƿ�
	p.set(10, 20);	// error
	p.print();		// error
					// ��, print() �� ��� ��� �Լ���� ok.. 
}

class Test
{
public:
	// �ٽ� #1.
	void f1() {}		// non-const member function
						// => ��� ����Ÿ�� �����Ҽ� �ִ�

	void f2() const {}  // const member function
						// => ��� ����Ÿ�� �����Ҽ� ����.
};

// �ٽ� #2.
// ��� ��ü�� "const member function" �� ȣ���Ҽ� �ִ�.

// �Ϲ� ��ü�� "��� ȣ�� ����"�ϴ�.