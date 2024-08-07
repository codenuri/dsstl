#include <list>
#include <vector>

// STL의 모든 컨테이너의 공통의 특징

int main()
{
	std::list<int> s = { 1,2,3 };

	// #1. 멤버 함수 뿐 아니라 멤버 타입이 있다.
	std::list<int>::value_type n = s.front();
	std::list<int>::size_type sz = s.size();


	// #2. 반환과 제거를 동시에 하지 않는다.
	// => 예외 안전성의 "강력보장" 을 위해서는 이렇게 설계 할수 밖에 없다.
	int n = s.back();	// 반환만, 요소 제거는 안됨
	s.pop_back();		// 제거만, 반환은 안됨(반환타입 void)


	// #3. 단위 전략(policy base design)을 많이 사용한다.
	std::vector<int, debug_alloc<int>> v;
}