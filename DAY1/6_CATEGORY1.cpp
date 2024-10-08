#include <forward_list>
#include <list>

// iterator category - 53 page

// 입력 반복자 : 입력(=*p), ++
// 
// 출력 반복자 : 출력(*p=), ++
// 
// ===> 위의 2개는 멀티패스 보장안함, 아래 4개는 멀티패스 보장
// => 주어진 구간을 2개이상의 반복자로 이동해도 동일데이타를 읽을수 있거낭
// => 하나의 반복자로 여러번 순회 하는 것을 보장하는 것을
// => 멀티플 패스를 보장한다고 합니다.
// 
// 전진형 반복자 : 입력(=*p), ++		싱글링크드 리스트 반복자
// 
// 양방향 반복자 : 입력(=*p), ++, --  더블리스트 반복자
// 
// 임의접근 반복자 : 입력(=*p), ++, --, +, -, []  연속된 메모리와유사한컨테이너
//												std::deque 는 연속된 메모리는
//												아니지만 임의접근 반복자입니다.
// continuous 반복자(C++17) : 연속된 메모리는 보장하는 컨테이너의 반복자
//							아직은 임의접근과 연산에서 큰 차이는 없습니다
//							미래에는 달라질수 있습니다.


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