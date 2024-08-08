#include "show.h"
#include <memory>

struct People
{
	std::string name;

	People(const std::string& n) : name(n) {}

	~People() { std::cout << name << " �ı�" << std::endl; }


	std::shared_ptr<People> bf; // best friend
};

int main()
{
	std::shared_ptr<People> sp1(new People("kim"));
	std::shared_ptr<People> sp2(new People("lee"));

	// �Ʒ� �ڵ尡 ������ �޸� ������ �ȵ˴ϴ�.
	// => ��ȣ ����, ��ȯ ����, ���� ����(cycle reference) ����
	sp1->bf = sp2;
	sp2->bf = sp1;
}


