#include <iostream>

#include <list>
#include <vector>
#include <deque>

// list �� �̹� �ֽ��ϴ�
// �׷���, ������ �ʿ��մϴ�.
// 1. ���Ӱ� ������.
// 2. list�� ����ó�� ���̰� ����.

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