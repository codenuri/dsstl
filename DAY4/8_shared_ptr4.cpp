#include "show.h"
#include <memory>

struct People
{
	std::string name;

	People(const std::string& n) : name(n) {}

	~People() { std::cout << name << " 파괴" << std::endl; }


	std::shared_ptr<People> bf; // best friend
};

int main()
{
	std::shared_ptr<People> sp1(new People("kim"));
	std::shared_ptr<People> sp2(new People("lee"));

	// 아래 코드가 있으면 메모리 해지가 안됩니다.
	// => 상호 참조, 순환 참조, 원형 참조(cycle reference) 현상
	sp1->bf = sp2;
	sp2->bf = sp1;
}


