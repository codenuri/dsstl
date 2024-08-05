#include <iostream>

// Step 5. 실패시 반환값
// => nullptr 대신 last 반환

// 1. last 는 검색대상이 아니므로 검색 성공시 last 가 나올수는 없다
// 2. last 는 다음 검색 구간의 시작을 나타내므로 활용도가 높다.
// 3. find 구현 자체도 약간 빨라진다.(아래 참고)

template<typename T1, typename T2>
T1 find(T1  first, T1 last, T2 c)
{
	while (first != last && *first != c)
		++first;
	return first;// == last ? nullptr : first;
}

int main()
{
	double x[] = { 1,2,3,4,5,6,7,8,9,10 };


	double* p = find(x, x + 3, 5);


	if (p == x+3)
		std::cout << "not found" << std::endl;
	else
		std::cout << "found : " << *p << std::endl;
}