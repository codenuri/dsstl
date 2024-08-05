#include <iostream>
#include <list>

template<typename C>
void f1(C& c)
{
	// ? 채우세요
	? n = c.front();
}
template<typename IT>
void f2(IT& p)
{
	? n = *p;
}

int main()
{
	std::list<int> s = { 1,2,3,4,5,6,7,8,9,10 };
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };

	f1(s); // 컨테이너 전달
	f2(s.begin()); // 반복자 전달(객체형)
	f2(x);		   // 반복자 전달(raw pointer)	 


}

