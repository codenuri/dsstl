#include "show.h"
#include <memory>

struct People
{
	std::string name;

	People(const std::string& n) : name(n) {}

	~People() { std::cout << name << " �ı�" << std::endl; }


//	std::shared_ptr<People> bf; 

	// ��� #1. ����Ʈ ������ ��� raw pointer ���
	People* bf;
};
/*
int main()
{
	std::shared_ptr<People> sp1(new People("kim"));
	std::shared_ptr<People> sp2(new People("lee"));

	sp1->bf = sp2.get();
	sp2->bf = sp1.get(); 
}
*/

// ���ڵ�� ���� ������.. �Ʒ� �ڵ带 ������ ������
// => ����Ʈ �����ͷ� �����Ǵ� ��ü�� �ּҸ�
// => raw pointer �� ����Ű�� �Ǹ�
// => "dangling pointer" �� �߻��Ҽ� �ִ�.
// => ���� ��� ����ϸ� �ȵȴ�.
int main()
{
	std::shared_ptr<People> sp1(new People("kim"));
	{
		std::shared_ptr<People> sp2(new People("lee"));

		sp1->bf = sp2.get();
		sp2->bf = sp1.get();

	} // <== lee �ı���.

	if (sp1->bf != nullptr)
	{
		auto name = sp1->bf->name; // ??? dangling pointer
	}
}








