#include <iostream>
#include <unordered_set>
#include "show.h"

struct People
{
	std::string name;
	int  age;

	People(std::string n, int a) : name(n), age(a) {}
};

// People ��ü�� �޾Ƽ� bucket index ��ȯ�ϴ� �Լ�
struct PeopleHash
{
	std::size_t operator()(const People& p) const
	{
		//return 1; // �̷��� �ص� �Ǳ� �մϴ�.
		//return p.age; // ��â���� ����̶�� ���� ����

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
	// �ٽ� : ����� ���� Ÿ���� "unordered_set" �� ������
	// => People Ÿ�Կ� ���� �ؽ� �Լ� ��ü �ʿ�
	// => People ��ü 2���� ���� == ������ �Ҽ� �ִ� �Լ� ��ü �ʿ�
	std::unordered_set<People, PeopleHash, PeopleEqual> s;

	s.emplace("kim", 20); // s.insert( People("kim",20) )
	s.emplace("lee", 25);
	s.emplace("park", 30);

	People peo("lee", 25);
	auto p = s.find( peo );

	std::cout << (*p).name << std::endl;
}

