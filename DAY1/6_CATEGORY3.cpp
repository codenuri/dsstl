#include <iostream>
#include <vector>
#include <list>
#include <iterator>

int main()
{
//	std::vector<int> s = { 1,2,3,4,5,6,7,8,9,10 };
	std::list<int> s = { 1,2,3,4,5,6,7,8,9,10 };

	auto p = s.begin();

	// 반복자 p를 5칸 전진하고 싶다.
//	p = p + 5;	// p 가 vector 반복자라면 ok
				// p 가 list   반복자라면 error

//	++p; ++p; ++p; ++p; ++p; // 모든 종류의 반복자에 대해서 동작
							 // 하지만 임의접근인경우는 성능저하.
	
	// 최선의 코드
	std::advance(p, 5); // p가 임의접근이면 + 로 이동
						// 아니면 "++" 로 이동

	std::cout << *p << std::endl;


	p = s.begin();

	// std::advance vs std::next
	
	std::advance(p, 3);	// p 자체를 이동

	auto p2 = std::next(p, 3); // p는 이동안함.
							   // p에서 3칸 떨어진 곳의 반복자 반환
}