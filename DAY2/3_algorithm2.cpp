#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include "show.h"

// 알고리즘은 컨테이너를 알지 못한다.

// std::remove
// => 인자로 전달되는 반복자가 어떤 컨테이너의 반복자 인지 알수 없다.
// => 따라서, 실제로 메모리를 제거할수는 없고,
// => 조건을 만족하는(제거 대상)요소를 찾으로 뒤의 요소를 앞으로 이동한다
// => 실제 메모리가 제거되는 것이 아니다.
// => 반환값으로 "유효하지 않은 구간의 처음" 을 가리키는 반복자 반환

int main()
{
	std::vector<int> v = { 1,2,3,1,2,3,1,2,3,1 };

	auto p = std::remove(v.begin(), v.end(), 3);

	show(v);  

	// 컨테이너의 요소를 실제로 제거 하려면
	// 알고리즘이 아닌 "멤버 함수"를 사용해야 한다.
	v.erase(p, v.end());

	show(v);


	return 0;
}



















//
