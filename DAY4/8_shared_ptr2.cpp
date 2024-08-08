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
	
	foo(std::shared_ptr<Point>( new Point(1,2) ), goo());
}





void foo( std::shared_ptr<Point> sp, int n) {}

int goo() { return 10; }

