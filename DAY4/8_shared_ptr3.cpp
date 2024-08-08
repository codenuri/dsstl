#include <iostream>
#include <memory>
#include "show.h"
void foo(void* p) { free(p); }

int main()
{
	// #1. 아래 코드는 모두 "new" 로 메모리 할당
	std::shared_ptr<int> sp1(new int);
	std::shared_ptr<int> sp2 = std::make_shared<int>(0);


	// #2. "new" 가 아닌 다른 방법으로 메모리 할당하기

//	std::shared_ptr<int> sp3(static_cast<int*>( malloc(sizeof(int)));
					// bug : 할당은 malloc, 해지는 : delete

	// 방법 #1. 생성자 2번째 인자로 삭제자 전달
	std::shared_ptr<int> sp3(static_cast<int*>(malloc(sizeof(int)),
						   	 &foo); // 생성자 2번째 인자로 삭제자 전달
									// 소멸자에서 delete 아닌 foo호출

	std::shared_ptr<int> sp4(static_cast<int*>(malloc(sizeof(int)),
		&free); // free를 직접 전달도 가능


	// 방법 #2. allocator 전달
	// => std::make_shared 가 아닌 std::allocate_shared

	std::shared_ptr<int> sp5 =
		std::allocate_shared<int>( debug_alloc<int>(), 0 );
}







