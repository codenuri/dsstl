#include "show.h"
#include <set>

struct Compare
{
	bool operator()(int a, int b) const
	{
		return (a / 10) < (b / 10);
	}
};

int main()
{
	std::set<int, Compare> s;

	// 다음중 실패는 ?
	s.insert(15);
	s.insert(25);
	s.insert(45);
	s.insert(35);
	s.insert(22); // 실패, 10의 자리가 2인 값은 이미 있다.(25)
	show(s);

	// 아래 2개의 검색 결과는 어떻게 나올까요 ?
	// 아래 코드가 equality
	// => == 로 검색하므로 실패!!
	auto ret1 = std::find(s.begin(), s.end(), 12); // ==
	
	if (ret1 == s.end())
		std::cout << "실패" << std::endl;



	// 아래는 equivalency 
	// => == 연산이 아닌
	// => Compare 함수 객체를 사용해서
	//    크지도 않고 작지도 않으면 찾음!!
	auto ret2 = s.find(12); 

	std::cout << *ret2 << std::endl; // 15
}