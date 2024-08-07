#include <vector>
#include <algorithm>
#include "show.h"

// vector    : 데이타 보관을 "힙"에 하게 됩니다.
// raw array : 지역변수라면 "stack" 에 보관

// 힙 할당/해지 는 "stack" 보다 많은 시간이 걸리게 됩니다.

// 모든 데이타를 스택에 보관하는 컨테이너를 설계해 봅시다.

template<typename T, std::size_t N>
struct array
{
	T buff[N];

	using iterator = T*;

	iterator begin() { return buff ; }
	iterator end()   { return buff + N ; }

	std::size_t size() const { return N; }
};

#include <array> // 이 안에 있는 코드가 위와 유사합니다.

int main()
{
	// 구조체 안에 배열은 아래 처럼 초기화 가능합니다.
//	array<int, 5> a = { 1,2,3,4,5 };
	std::array<int, 5> a = { 1,2,3,4,5 };

	auto sz = a.size();
}
