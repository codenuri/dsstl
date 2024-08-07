#include <array> // C++11 에서 도입

int main()
{
	std::array<int, 5> a = { 1,2,3,4,5 };

	// #1. "raw array" 과 완전히 동일한 메모리 구조
	// #2. 성능도 거의 유사
	// #3. 하지만 멤버 함수가 있어서 "raw array" 보다는 편리
	// #4. 삽입/삭제, 크기 변경등은 할수 없습니다.

	auto sz = a.size();		// ok
	auto first = a.begin();	// ok

	a.push_back(10); // error
	a.resize(10); // error

}