#include <iostream>

// Step 3. 검색 대상 타입의 일반화
// => template 사용
// => 함수 이름 변경 : strchr => find

template<typename T>
T* find(T* first, T* last, T c)
{
	while (first != last && *first != c)
		++first;

	return first == last ? nullptr : first;
}

int main()
{
	double x[] = { 1,2,3,4,5,6,7,8,9,10 };

	// 주의 10 개 배열의 마지막 요소는 x+9 이지만
	// => x, x+9 로 전달하면 마지막 요소는 검색 대상 아님
	// => 전체 검색 하려면 마지막 다음요소의 주소 전달(x+10)

	double* p = find(x, x + 10, 5.0);


	if (p == nullptr)
		std::cout << "not found" << std::endl;
	else
		std::cout << "found : " << *p << std::endl;
}