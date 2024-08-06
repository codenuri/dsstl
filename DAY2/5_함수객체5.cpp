#include <iostream>
#include <algorithm> 

// 아래 함수는 
// 장점 : 비교 정책을 사용자가 교체 할수 있습니다.
// 단점 : 비교 정책함수가 수백~수천번 호출되게 되면 성능저하가 큽니다.

// C언어의 "qsort" 가 아래 원래!! 데이타가 많으면 사용하지 마세요. 

// 비교 정책을 변경할수 있는데..성능저하가 없도록 할수 없을까요 ?
// =>!! 함수 객체는 가능..!!

void Sort(int* x, int sz, bool(*cmp)(int, int) )
{
	for (int i = 0; i < sz - 1; i++)
	{
		for (int j = i + 1; j < sz; j++)
		{
//			if (x[i] > x[j])  // 직접 비교

			if ( cmp(x[i], x[j]) == true )	// 사용자가 전달한
											//	비교함수 호출
				std::swap(x[i], x[j]);
		}
	}
}

// Sort 에 전달할 비교함수들..
inline bool cmp1(int a, int b) { return a > b; }
inline bool cmp2(int a, int b) { return a < b; }

int main()
{
	int x[10] = { 1,3,5,7,9,2,4,6,8,10 };
//	Sort(x, 10);

	Sort(x, 10, &cmp1);	// 3번째 인자로 비교함수 전달
	Sort(x, 10, &cmp2);
}

