// 1일차 : iterator
// 2일차 : algorithm
// 3일차 : container

#include <iostream>
#include <memory>

int main()
{
	// 메모리 할당 방법 #1. new/delete 사용
	int* p1 = new int;
	delete p1;


	// 메모리 할당 방법 #2. allocator 사용

	std::allocator<int> ax; // 메모리 할당기

	int* p2 = ax.allocate(10);	// int 10개 크기 메모리 할당
								// new int[10] 의 의미

	ax.deallocate(p2, 10);	// 메모리 해지
							// delete[] p2;

}