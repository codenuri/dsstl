#include <iostream>
#include <list>
#include <algorithm>


bool foo(int n ) { return n % 3 == 0; }

int main()
{
	std::list<int> s = { 1,2,6,4,5,3,7,8,9,10 };

	int k = 3; // 사용자가 입력한 값이라고 가정

	// 주어진 구간에서 처음 나오는 "k의 배수"를 찾고싶다 !!!

	auto ret1 = std::find_if(s.begin(), s.end(), foo);

	// 위 기능을 수행하려면 "find_if" 의 마지막 인자로
	// => "foo 함수" 와 "지역변수 k" 를 같이 보낼수 있어야 한다.
	// 
	// => 일반 함수로는 이기능을 만들수 없다.
	// => 함수 객체는 가능한다.

	
}




