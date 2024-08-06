#include <iostream>
#include <algorithm> 



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
bool cmp1(int a, int b) { return a > b; }
bool cmp2(int a, int b) { return a < b; }

int main()
{
	int x[10] = { 1,3,5,7,9,2,4,6,8,10 };
//	Sort(x, 10);

	Sort(x, 10, &cmp1);	// 3번째 인자로 비교함수 전달
	Sort(x, 10, &cmp2);
}

