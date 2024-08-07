#include <iostream>

#include <list>
#include <vector>
#include <deque>


// 상속을 사용한 stack 
// => Java 의 stack 이 상속으로 되어 있습니다
// => 나쁜 디자인의 대표적인 예로 소개 되곤 합니다.

template<typename T>
class stack : public std::list<T>
{
public:
	inline void push(const T& e) { c.push_back(e); }
	inline void pop() { c.pop_back(); }
	inline T& top() { return c.back(); }
};

int main()
{

	stack<int> s;
	s.push(10);
	s.push(20);


	s.push_front(30); // !!! 한쪽으로만 사용해야 하는데..
					  // 양쪽으로 사용하게 됩니다.
					  // 이렇게 사용할수 없어야 합니다.

}