#include <iostream>

#include <list>
#include <vector>
#include <deque>


// ����� ����� stack 
// => Java �� stack �� ������� �Ǿ� �ֽ��ϴ�
// => ���� �������� ��ǥ���� ���� �Ұ� �ǰ� �մϴ�.

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


	s.push_front(30); // !!! �������θ� ����ؾ� �ϴµ�..
					  // �������� ����ϰ� �˴ϴ�.
					  // �̷��� ����Ҽ� ����� �մϴ�.

}

// LSP : Liskov Substitution Principle
// => ��� Ŭ������ ���Ǵ� �ڸ����� �Ļ� Ŭ������ ������ �־�� �Ѵ�.
/*
void foo(Animal* p) {}

foo(new Dog);

void goo(list* p) { p->push_front(10); }

goo(new stack);
*/