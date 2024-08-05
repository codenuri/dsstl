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

	// T::value_type => std::list<double>::value_type => double

	typename T::value_type n = v.front();
//	auto n = v.front();

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

/*
// 그래서 STL 은 아래 처럼 설계되었습니다.
template<typename T>
class list
{
public:
	using value_type = T; // 핵심!!!
};

list<int> s = { 1,2,3 };
list<int>::value_type n = s.front(); // n 의 타입은 ?
*/

// STL 특징

// 일반 클래스 : 멤버 데이타 와 멤버 함수 가 있습니다.
// STL  클래스 : 멤버 데이타 와 멤버 함수, 그리고 멤버 타입이 있습니다.

template<typename T>
class list
{
	int size; // 멤버 데이타
public:
	void push_back(T& e) {} // 멤버 함수

	using value_type = T; // 멤버 타입
};

// cppreference.com 에서 오른쪽 상단에서 std::list 검색