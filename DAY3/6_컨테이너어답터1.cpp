#include <iostream>

#include <list>
#include <vector>
#include <deque>

// list �� �̹� �ֽ��ϴ�
// �׷���, ������ �ʿ��մϴ�.
// 1. ���Ӱ� ������.
// 2. list�� ����ó�� ���̰� ����.

// adapter ���� : ���� Ŭ������ �Լ��̸��� �����ؼ�
//				 �ٸ� Ŭ���� ó�� ���̰� �ϴ� ������ ����

// �Ʒ� �ڵ�� list �� ����Լ�(push_back) ��
//            stack ó�� ���̰� �����ϴ� �����

template<typename T, typename C = std::deque<T> >
class stack
{
	C c;
public:
	inline void push(const T& e) { c.push_back(e); }
	inline void pop()			 { c.pop_back(); }
	inline T&   top()			 { return c.back(); }
};

#include <stack> // �� �ȿ� �ִ� STL stack �� �� ó�� ���� �Ǿ����ϴ�.
				 // ���� "stack adapter" ��� �θ��ϴ�.
				 // ����, sequence container �� stack ó��
				 // ���̵��� �Լ� �̸��� �����Ѱ�

int main()
{
	stack<int> s1;  // ���������� std::deque ���

	stack<int, std::vector<int>> s2;
					// vector �� stack ó�� ���̰� �ش޶�� �ǹ�
	
	stack<int, std::list<int>> s3;


	stack<int> s;
	s.push(10);
	s.push(20);

	std::cout << s.top() << std::endl;

}