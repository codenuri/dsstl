#include "show.h"
#include <memory>

struct People
{
	std::string name;

	People(const std::string& n) : name(n) {}

	~People() { std::cout << name << " 파괴" << std::endl; }


//	std::shared_ptr<People> bf; 

	// 방법 #1. 스마트 포인터 대신 raw pointer 사용
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

// 위코드는 문제 없지만.. 아래 코드를 생각해 보세요
// => 스마트 포인터로 관리되는 객체의 주소를
// => raw pointer 로 가리키게 되면
// => "dangling pointer" 가 발생할수 있다.
// => 절대 섞어서 사용하면 안된다.
int main()
{
	std::shared_ptr<People> sp1(new People("kim"));
	{
		std::shared_ptr<People> sp2(new People("lee"));

		sp1->bf = sp2.get();
		sp2->bf = sp1.get();

	} // <== lee 파괴됨.

	if (sp1->bf != nullptr)
	{
		auto name = sp1->bf->name; // ??? dangling pointer
	}
}








