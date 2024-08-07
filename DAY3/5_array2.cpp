#include <vector>
#include <algorithm>
#include "show.h"

// vector    : 데이타 보관을 "힙"에 하게 됩니다.
// raw array : 지역변수라면 "stack" 에 보관

// 힙 할당/해지 는 "stack" 보다 많은 시간이 걸리게 됩니다.

// 모든 데이타를 스택에 보관하는 컨테이너를 설계해 봅시다.

struct array
{
	int buff[5];
};

int main()
{
	// 구조체 안에 배열은 아래 처럼 초기화 가능합니다.
	array a = { 1,2,3,4,5 };
}
