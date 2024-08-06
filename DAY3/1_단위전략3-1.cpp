// 1_단위전략3-1
#include <vector>
#include <iostream>

// 사용자 정의 메모리 할당기

// 1. 반드시 템플릿일 필요는 없지만, 대부분 다양한 타입에 대해
//    메모리 할당해야 하므로 관례상 템플릿으로

template<typename T>
class debug_alloc
{
public:

};


int main()
{
	std::vector<int, debug_alloc<int> > v;

	std::cout << "------------------\n";

	v.resize(5); // 이 순간 5개 버퍼 할당

	std::cout << "------------------\n";
}
