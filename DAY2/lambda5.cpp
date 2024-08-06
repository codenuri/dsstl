#include <iostream>
#include <list>
#include <algorithm>


bool foo(int n) { return n % 3 == 0; }


class IsDivide
{
	int value;
public:
	IsDivide(int n) : value(n) { } 

	bool operator()(int n) { return n % value == 0; }
};


int main()
{
	std::list<int> s = { 1,2,6,4,5,3,7,8,9,10 };

	int k = 3;
	auto ret1 = std::find_if(s.begin(), s.end(), IsDivide{ k });


	// 람다표현식안에서는 main 의 지역변수를 바로 사용가능
	// => 단, 캡쳐를 표기해야 합니다.
	auto ret2 = std::find_if(s.begin(), s.end(), 
					[k](int n) { return n % k == 0; });

	// 위 람다 표현식의 원리
	class CompilerGeneratedName
	{
		int value;
	public:
		CompilerGeneratedName(int n) : value(n) { }

		bool operator()(int n) { return n % value == 0; }
	};
	auto ret3 = std::find_if(s.begin(), s.end(),
		CompilerGeneratedName{k} );
}




