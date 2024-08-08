#include "show.h"
#include <memory>

struct People
{
	std::string name;

	People(const std::string& n) : name(n) {}

	~People() { std::cout << name << " 파괴" << std::endl; }


//	std::shared_ptr<People> bf; 

	// 해결책 #2. std::weak_ptr

	std::weak_ptr<People> bf;	// 1. 참조계수가 증가하지 않는 스마트포인터
								// 2. 객체 파괴 여부 조사 가능
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
 
	// #1. weak_ptr은 파괴 여부 조사가능
	std::cout << sp1->bf.expired() << std::endl;

	// #2. weak_ptr 은 객체 접근 안됨
	if (!sp1->bf.expired())
	{
		// weak_ptr 은 참조계수 증가 안함으로
		// => 수명에 참여 하지 않습니다.
		// => 다른 sp 가 파괴되면 객체는 언제라도 파괴될수 있습니다.
		// => 따라서, weak_ptr 은 객체접근할수 없게 만들었고
		// => -> 연산자가 없습니다
	//	auto name = sp1->bf->name; // error


		// 핵심 #3. weak_ptr 로 객체 접근하려면
		// => 참조계수 증가후 접근해야 합니다.
		// => 참조계수 증가는 shared_ptr만 가능합니다.

		std::shared_ptr<People> sp = sp1->bf.lock();

		if (sp)
		{
			auto name = sp->name;
		}
	}
}


