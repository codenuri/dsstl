#include <iostream>
#include <list>
#include <algorithm>


bool foo(int n) { return n % 3 == 0; }


class IsDivide
{
	int value;
public:
	IsDivide(int n) : value(n) {}

	bool operator()(int n) 	{ return n % value == 0; }
};


int main()
{
	std::list<int> s = { 1,2,6,4,5,3,7,8,9,10 };

	int k = 3; 

	IsDivide f(k);  // f 라는 객체는 내부 멤버 데이타로 "k값보관"
	bool b = f(10); // 10 % value(k값)
					// => 결국 f 는 "k값을 보관"한 단항 조건자. 

//	auto ret1 = std::find_if(s.begin(), s.end(), f);

	auto ret1 = std::find_if(s.begin(), s.end(), IsDivide{k} );

	// => 위코드는 결국 "IsDidive 단항함수 객체와 main 지역변수 k"
	//    를 같이 전달하는 코드

	// Closure : 자신이 포함된 문맥의 지역변수를 캡쳐할수 있는
	//			 능력이 있는 함수(객체)

}




