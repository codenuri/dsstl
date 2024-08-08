// 아래 매크로 정의 하면
// visual studio 사용시 "보안관련 에러 내지 말라는 의미"
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <memory>
#include "show.h"

int main()
{
//	std::shared_ptr<int> sp1( new int[10] );
			// 버그
			// "delete[]" 해야 하는데 sp1의 소멸자에서는 "delete"
			// "삭제자 전달해야 합니다"

	std::shared_ptr<int> sp1(new int[10],
							[](int* p) { delete[] p; } );


	// C++17 부터는 아래처럼도 가능.
	std::shared_ptr< int[] > sp2(new int[10]);

	// 그런데, int[10] 개를 힙에 생성할것이라면!!
	// => vector 를 사용하면 되지 않을까??!!

	// 참고로 메모리 외의 자원도 관리 가능하긴 합니다.
	std::shared_ptr< FILE > sp5( fopen("a.txt", "wt"), &fclose );

}







