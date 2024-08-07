#include <iostream>

#include <list>
#include <vector>
#include <deque>

// list 가 이미 있습니다
// 그런데, 스택이 필요합니다.
// 1. 새롭게 만들자.
// 2. list를 스택처럼 보이게 하자.

template<typename T>
class stack
{
	std::list<int> c;
public:
	void push(const T& e) { c.push_back(e); }
	void pop()			  { c.pop_back(); }
	T&   top()			  { return c.back(); }
};

int main()
{
	stack<int> s;
	s.push(10);
	s.push(20);

	std::cout << s.top() << std::endl;

}