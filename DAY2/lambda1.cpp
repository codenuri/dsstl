// lambda1.cpp
#include <iostream>
#include <algorithm>
#include <vector>
#include <functional> 

int main()
{
	std::vector<int> v = { 1,3,5,7,9,2,4,6,8,10 };

	std::sort(v.begin(), v.end(), [](int a, int b) {return a < b; });

	// 위 한줄을 컴파일러는 아래 처럼 변경합니다.
	class CompilerGeneratedName
	{
	public:
		inline bool operator()(int a, int b)
		{
			return a < b;
		}
	};
	std::sort(v.begin(), v.end(), CompilerGeneratedName{} );

	// 람다 표현식의 최종 결과는
	// => operator() 를 가진 클래스의 임시객체 입니다.
}









