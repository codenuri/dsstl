#include <iostream>
#include <memory>


void* operator new(std::size_t sz)
{
	std::cout << "new : " << sz << std::endl;
	return malloc(sz);
}

struct Point
{
	int x, y;

	Point(int a = 0, int b = 0) : x(a), y(b) {}
};

int main()
{
	// �Ʒ� �ڵ�� ���� �޸� �Ҵ��� ����ϰ� �ɱ�� ?
	// => 2��
	// => 1. ����� �ڵ��� "new Point"
	// => 2. shared_ptr�� �����ڿ��� "new control_block"

//	std::shared_ptr<Point> sp( new Point(1, 2) );

	// ����Ʈ �����͸� ����Ҷ� ���ü(Point)�� ���� "new" ��������
	// std::make_shared �� ����ϼ���

	// std::make_shared �� �ϴ� ��
	// 1. sizeof(Point) + sizeof(control block)�� �ѹ��� �޸� �Ҵ�
	// 2. Point �κ��� 1, 2 �� ������ ȣ���ؼ� �ʱ�ȭ
	// 3. shared_ptr�� �����ؼ� ��ȯ 
	std::shared_ptr<Point> sp = std::make_shared<Point>(1, 2);

	// std::make_shared ����
	// 1. ȿ������ �޸� ( Point �� Control block�� �ѹ��� �Ҵ�)
	// 2. ������
	
	// �Ʒ� �ڵ�� 3���� ���� �մϴ�. ( A, B, C )
	// => A, B, C ������ ����Ǹ� ���� �����ϴ�.
	// => A, C, B ������ ����ǰ�, C���� ���ܰ� ������ ??
	//			B					A              C
	foo( std::shared_ptr<Point>( new Point(1,2) ), goo() );

	// �� �ڵ忡�� �˼� �ִ� ��
	// => "�ڿ��� ȹ���ϸ� ���, ���� ��ü�� �����ؾ� �մϴ�."
	// => "�ڿ��� ȹ��� ����Ʈ ������ ������ "�ѹ�"�� �ؾ� �����մϴ�.


	foo( std::make_shared<Point>(1,2), goo());
}


void foo( std::shared_ptr<Point> sp, int n) {}

int goo() { return 10; }


f(f1(), f2())