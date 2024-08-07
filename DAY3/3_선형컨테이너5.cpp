#include <vector>
#include <iostream>
#include <algorithm>
#include "show.h"

// 예전에 만들어 놓은 함수
// => C 스타일 함수
// => 인자로 배열 시작 주소와 크기 
void foo(int* arr, int sz) {}

int main()
{
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };
	foo(x, 10);

	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	// foo 에 v를 보내 보세요.
//	foo(&v, v.size());	// error
						// 버퍼 주소가 아닌 v 자체의 주소

	foo(&v[0], v.size());	// 예전에 사용하던 방식
	foo(v.data(), v.size());// 위와 동일한 의미

}

