#include <iostream>
#include <unordered_set>
#include "show.h"

struct People
{
	std::string name;
	int  age;

	People(std::string n, int a) : name(n), age(a) {}
};

// People 객체를 받아서 bucket index 반환하는 함수
struct PeopleHash
{
	std::size_t operator()(const People& p) const
	{
		//return 1; // 이렇게 해도 되긴 합니다.
		//return p.age; // 동창생의 목록이라면 나쁜 성능

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
	// 핵심 : 사용자 정의 타입을 "unordered_set" 에 넣을때
	// => People 타입에 대한 해쉬 함수 객체 필요
	// => People 객체 2개에 대한 == 연산을 할수 있는 함수 객체 필요
	std::unordered_set<People, PeopleHash, PeopleEqual> s;

	s.emplace("kim", 20); // s.insert( People("kim",20) )
	s.emplace("lee", 25);
	s.emplace("park", 30);

	People peo("lee", 25);
	auto p = s.find( peo );

	std::cout << (*p).name << std::endl;
}

