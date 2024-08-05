#include <iostream>
#include <vector>
#include <list>

/*
void print_first_element(std::vector<int>& v)
{
	int n = v.front();
	std::cout << n << std::endl;
}
*/
/*
template<typename T>
void print_first_element(std::vector<T>& v)
{
	T n = v.front();

	std::cout << n << std::endl;
}
*/
template<typename T>
void print_first_element(T& v)
{
	// T : std::list<double>

	? n = v.front();

	std::cout << n << std::endl;
}


int main()
{
//	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };
//	std::vector<double> v = { 1,2,3,4,5,6,7,8,9,10 };
	std::list<double> v = { 1,2,3,4,5,6,7,8,9,10 };

	print_first_element(v);
}

// template 기반 컨테이너 설계시
// 컨테이너가 저장하는 타입을 알고 싶을때가 있습니다.
// 위 "print_first_element" 처럼

// 그래서 STL 은 아래 처럼 설계되었습니다.
template<typename T>
class list
{
public:
	using value_type = T; // 핵심!!!
};

list<int> s = { 1,2,3 };
list<int>::value_type n = s.front(); 