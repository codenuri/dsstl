#include <iostream>
#include <list>
#include <algorithm>


bool foo(int n) { return n % 3 == 0; }

int main()
{
	std::list<int> s = { 1,2,6,4,5,3,7,8,9,10 };

	int k = 3; // 사용자가 입력한 값이라고 가정

	// 주어진 구간에서 처음 나오는 "k의 배수"를 찾고싶다 !!!

	auto ret1 = std::find_if(s.begin(), s.end(), foo);


	
}




