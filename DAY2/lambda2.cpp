// lambda2.cpp
#include <iostream>
#include <algorithm>
#include <vector>
#include <functional> 

int main()
{
	// 람다 활용
	// #1. std::sort() 등의 알고리즘에 인자로 전달
	// #2. auto 변수에 담아서 함수 처럼 사용(인라인 함수와 유사)

	auto f = [](int a, int b) { return a + b; };
		    // class AAA{ operator()(int, int) }; 
		    // AAA{}  <= 임시객체 생성
			// 결국 위 코드는
			// "AAA f" 객체를 생성한것

	int n1 = f(10, 20);
	int n2 = f.operator()(10, 20); // 이렇게 해도 됩니다.
									// 결구 함수 객체 이므로!


}









