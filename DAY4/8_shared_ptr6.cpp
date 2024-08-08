#include "show.h"
#include <memory>

struct People
{
	std::string name;

	People(const std::string& n) : name(n) {}

	~People() { std::cout << name << " �ı�" << std::endl; }


//	std::shared_ptr<People> bf; 

	// �ذ�å #2. std::weak_ptr

	std::weak_ptr<People> bf;	// 1. ��������� �������� �ʴ� ����Ʈ������
								// 2. ��ü �ı� ���� ���� ����
								// 
};

int main()
{
	std::shared_ptr<People> sp1(new People("kim"));
	{
		std::shared_ptr<People> sp2(new People("lee"));

		sp1->bf = sp2;
		sp2->bf = sp1;
	}
 
	// #1. weak_ptr�� �ı� ���� ���簡��
	std::cout << sp1->bf.expired() << std::endl;

	// #2. weak_ptr �� ��ü ���� �ȵ�
	if (!sp1->bf.expired())
	{
		// weak_ptr �� ������� ���� ��������
		// => ���� ���� ���� �ʽ��ϴ�.
		// => �ٸ� sp �� �ı��Ǹ� ��ü�� ������ �ı��ɼ� �ֽ��ϴ�.
		// => ����, weak_ptr �� ��ü�����Ҽ� ���� �������
		// => -> �����ڰ� �����ϴ�
	//	auto name = sp1->bf->name; // error


		// �ٽ� #3. weak_ptr �� ��ü �����Ϸ���
		// => ������� ������ �����ؾ� �մϴ�.
		// => ������� ������ shared_ptr�� �����մϴ�.

		std::shared_ptr<People> sp = sp1->bf.lock();

		if (sp)
		{
			auto name = sp->name;
		}
	}
}


