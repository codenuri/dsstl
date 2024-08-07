#include <iostream>

#include <list>
#include <vector>
#include <deque>

// list 가 이미 있습니다
// 그런데, 스택이 필요합니다.
// 1. 새롭게 만들자.
// 2. list를 스택처럼 보이게 하자.

// adapter 패턴 : 기존 클래스의 함수이름을 변경해서
//				 다른 클래스 처럼 보이게 하는 디자인 패턴

// 아래 코드는 list 의 멤버함수(push_back) 을
//            stack 처럼 보이게 변경하는 어답터

template<typename T, typename C = std::deque<T> >
class stack
{
	C c;
public:
	inline void push(const T& e) { c.push_back(e); }
	inline void pop()			 { c.pop_back(); }
	inline T&   top()			 { return c.back(); }
};

#include <stack> // 이 안에 있는 STL stack 이 외 처럼 설계 되었습니다.
				 // 흔히 "stack adapter" 라고 부릅니다.
				 // 기존, sequence container 를 stack 처럼
				 // 보이도록 함수 이름을 변경한것

int main()
{
	stack<int> s1;  // 내부적으로 std::deque 사용

	stack<int, std::vector<int>> s2;
					// vector 를 stack 처럼 보이게 해달라는 의미
	
	stack<int, std::list<int>> s3;


	stack<int> s;
	s.push(10);
	s.push(20);

	std::cout << s.top() << std::endl;

}