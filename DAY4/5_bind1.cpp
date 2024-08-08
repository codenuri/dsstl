#include <iostream>
#include <algorithm>
#include <functional>   // std::bind 가 있는 헤더
using namespace std::placeholders; // _1, _2, _3 을 위해서.. 

// foo : 4항 함수 ( 인자가 4개 )
void foo( int a, int b, int c, int d)
{
    printf("%d, %d, %d, %d\n", a, b, c, d);
}

class Sample
{
public:
    void foo(int a, int b, int c, int d) {}
};

int main()
{
    foo(1,2,3,4);   

    // std::bind : 특정 함수의 인자를 고정한 새로운 함수를 만드는 도구

    // #1. 사용법 : std::bind(M항함수, M개인자)

    auto f1 = std::bind(&foo, 1, 2, 3, 4); // 4항함수 => 0항함수로
    f1();   // foo( 1, 2, 3, 4) 와 동일


    auto f2 = std::bind(&foo, 7, _1, 6, _2); // 4항 => 2항
    f2(5, 3); // foo(7, 5, 6, 3)


    auto f3 = std::bind(&foo,  _2, _3, 8, _1) ;
    f3(7, 3, 2); // foo(3, 2, 8, 7) 나오게 위 ? 만들어 보세요


    // #2. std::bind 반환값
    // => 사용하는 형태에 따라서(인자) 반환 타입은 모두 다른 타입입니다.
    // => auto 에 담거나, std::function 에 담아야 합니다.

    std::cout << typeid(f1).name() << std::endl;
    std::cout << typeid(f2).name() << std::endl;
    std::cout << typeid(f3).name() << std::endl;


//  f3 = std::bind(&foo, 1, 2, 3, 4); // error.
                                      // 타입이 다르다.

    // #3. 멤버 함수는 "객체"도 같이 고정해야 합니다.

    Sample s;

    auto f4 = std::bind(&Sample::foo, &s, 1, 2, 3, 4);

    f4(); // s.foo(1,2,3,4)


    // 참고!
    // => 일반 함수 이름은 함수 주소로 암시적 형변환 됩니다.
    // => 멤버 함수 이름은 함수 주소로 암시적 형변한 안됩니다.

    void(*f)(int, int, int, int) = &foo;
    void(*f)(int, int, int, int) = foo; // ok

    void(Sample::*f)(int, int, int, int) = &Sample::foo;
    void(Sample::*f)(int, int, int, int) = Sample::foo; // error
                                        // 반드시 & 필요
}









