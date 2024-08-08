#include <iostream>
#include <unordered_set>
#include "show.h"

struct People
{
	std::string name;
	int  age;

	People(std::string n, int a) : name(n), age(a) {}
};

// ǥ�� std::hash �� Ÿ�����ڰ� People �� ��츦 ����
// Ư��ȭ ���� ����( template specialization ����)
template<>
struct std::hash<People>
{
	std::size_t operator()(const People& p) const
	{
		std::hash<int> hi;
		std::hash<std::string> hs;

		return hi(p.age) + hs(p.name);
	}
};

struct PeopleEqual
{
	bool operator()(const People& p1, const People& p2) const
	{
		return p1.age == p2.age && p1.name == p2.name;
	}
};

int main()
{

//	std::unordered_set<People, PeopleHash, PeopleEqual> s;

	std::unordered_set<People> s;
//	std::unordered_set<People, std::hash<People>, std::equal_to<People>
//												  std::allocator<People> > s;



	s.emplace("kim", 20); 
	s.emplace("lee", 25);
	s.emplace("park", 30);

	People peo("lee", 25);
	auto p = s.find(peo);

	std::cout << (*p).name << std::endl;
}

