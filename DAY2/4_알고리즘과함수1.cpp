#include <iostream>
#include <vector>
#include <algorithm>
#include "show.h"
using namespace std;


// STL 의 많은 알고리즘이 인자로 함수를 요구 합니다

// 단항함수(unary function)  : 인자가 1개인 함수
// 이항함수(binary function) : 인자가 2개인 함수

void foo(int n) {   std::cout << n << std::endl;}

int main()
{
    std::vector<int> v = {1,2,3,4,5,6,7,8,9,10};
    
    // #1. for_each 알고리즘
    std::for_each(v.begin(), v.end(), foo);


    // #2. 일반 함수보다 람다 표현식을 권장합니다.

    std::for_each(v.begin(), v.end(), 
                [](int n) { std::cout << n << std::endl; } );


	return 0;
}



















//
