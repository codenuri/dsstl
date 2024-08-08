#include <iostream>

class Car
{
public:
	void Go() { std::cout << "Go" << std::endl; }
	~Car()    { std::cout << "~Car" << std::endl; }
};
// ���� : ��ü�� �ٸ� Ÿ���� ������ ó�� ���Ǵ� ��
// 
// ���� : -> �� * �� ������ �ؼ� ������ ó�� ���̰� �Ѱ�
// 
// ���� : raw pointer �� �ƴ� ��ü�̴�.
//	      ����/����/����/�ı� �� ��� �������� �߰� �۾��� �����ϴ�.
//        ��ǥ���� Ȱ���� �Ҹ��ڿ��� "delete" ��� ����

// �Ʒ� Ptr �� �ٽ��Դϴ�.
class Ptr
{
	Car* obj;
public:
	Ptr(Car* p = 0) : obj(p) {}

	Car* operator->() { return obj; }

	Car& operator*() { return *obj; }

	~Ptr() { delete obj; }
};

int main()
{
	Ptr p = new Car; // Ptr p( new Car ) �� �����ϼ���

	p->Go();	// (p.operator->())Go() �� ����������
				// (p.operator->())->Go() �� �ؼ��˴ϴ�.

	(*p).Go();
}


