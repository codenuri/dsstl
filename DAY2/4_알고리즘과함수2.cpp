#include <iostream>
#include <list>
#include <algorithm>
#include "show.h"


int main()
{
    std::list<int> s1 = { 1,2,3,4,5};
    std::list<int> s2 = { 6,7,8,9,10 };
    std::list<int> s3;

    // transform 알고리즘

    std::transform(s1.begin(), s1.end(), // 1. 이구간의 요소를
                   s2.begin(),           // 2. 이구간의 요소와 함께
                   s3.begin(),           // 4. 이구간에 넣어라
                   foo);                 // 3. 이함수에보내서 결과를

    
    show(s3);
}



















//
