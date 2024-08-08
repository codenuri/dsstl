#include <iostream>
#include <algorithm>
#include <functional>
using namespace std::placeholders;

// foo : 4항 함수 ( 인자가 4개 )
void foo( int a, int b, int c, int d)
{
    printf("%d, %d, %d, %d\n", a, b, c, d);
}

int main()
{
    foo(1,2,3,4);   

    // std::bind : 특정 함수의 인자를 고정한 새로운 함수를 만드는 도구

    // 사용법 : std::bind(M항함수, M개인자)

    auto f1 = std::bind(&foo, 1, 2, 3, 4); // 4항함수 => 0항함수로

    f1();   // foo( 1, 2, 3, 4) 와 동일


    auto f2 = std::bind(&foo, 7, _1, 6, _2); // 4항 => 2항

    f2(5, 3); // foo(7, 5, 6, 3)


    auto f3 = ? ;

    f3(7, 3, 2); // foo(3, 2, 8, 7) 나오게 위 ? 만들어 보세요
}









