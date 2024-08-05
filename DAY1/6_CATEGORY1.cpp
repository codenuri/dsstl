#include <forward_list>
#include <list>

int main()
{
	std::forward_list<int> s1 = { 1,2,3 }; // 싱글 링크드 리스트

	std::list<int> s2 = { 1,2,3 };		   // 더블 링크드 리스트

	auto p1 = s1.begin();
	auto p2 = s2.begin();
	
	// 아래 코드에서 에러를 찾으세요
	++p1;
	--p1;	// error. 자료구조 특성상
			// 싱글리스트 반복자는 -- 연산이 될수 없다
	++p2;
	--p2;

}