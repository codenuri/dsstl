#include <iostream>
#include <functional>
using namespace std::placeholders;

void f1(int a)               { printf("f1 : %d\n", a); }
void f2(int a, int b)        { printf("f2 : %d, %d\n", a, b);}
void f3(int a, int b, int c) { printf("f3 : %d, %d, %d\n", a, b, c); }
void f4(int a, int b, int c, int d) { printf("f4 : %d, %d, %d, %d\n", a, b, c, d);}

class Sample
{
public:
    void f2(int a, int b) {}
};

int main()
{
    // #1. 함수 포인터 : 유연성이 부족합니다.
//  void(*f)(int);  // 인자가 한개인 함수의 주소만 담을수 있습니다.
//  f = &f1; // ok
//  f = &f2; // error



    // #2. std::function
    // => 함수 포인터를 일반화한 클래스 템플릿
    // 
    // 사용법 : std::function<반환타입(인자타입)> 

    std::function<void(int)> f;
    f = &f1;
    f(10);  // f1(10);


    // std::function 은 함수 포인터와 유사하게 사용할수 있습니다.
    // 그리고, std::bind 결과도 담을수 있습니다.

//  f = &f2; // error.

    f = std::bind(&f2, 3, _1);
    f(5); // f2(3, 5)


    // f 는 인자가 한개인 std::function 이므로
    // => 모든 함수를 인자 한개 형태로 std::bind 해야 합니다.

    f = std::bind(&f4, 3, 2, _1, 9) ;
    f(5); // f4(3, 2, 5, 9) 나오게 해보세요


    Sample s;
    f = std::bind(&Sample::f2, &s, _1, 7) ;
    f(5); // s.f2(5, 7) 되도록 해보세요

    // 결국 "std::function<void(int)>" 타입인 f 에는

    // => 인자가 int 한개 인 함수 뿐아니라
    // => "한개 이상인 모든 함수"를 담을수 있습니다.
}













//
