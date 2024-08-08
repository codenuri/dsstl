#include <iostream>
#include <algorithm>
#include <functional>
using namespace std::placeholders;

int main()
{
    std::modulus<int> m; // % 연산을 수행하는 이항 함수 객체

    int n = m(10, 3); // 10 % 3  => 1 



    int x[5] = { 9, 9, 2, 4, 3};

    // 3의 배수가 아닌 것을 찾고 싶다.!

//  auto p = std::find_if ( x, x + 5, m ); // error
                // => find_if 의 3번째 인자는 "단항함수"를 요구
                // => 하지만 "m" 은 이항 함수 객체


    // 이항인 m 을 std::bind 로 단항으로 변경해서 보내면 됩니다.
    auto p = std::find_if(x, x + 5, std::bind(m, _1, 3) ); // ok

    std::cout << *p << std::endl; // 2

    // 위처럼 std::bind()로 할수 도 있지만..
    // 권장은 "람다 표현식을 새롭게 만드세요"
}

















//












//
