#include <iostream>


template<typename T> struct Node
{
	T     data;
	Node* next;

	Node(const T& a, Node* n) : data(a), next(n) {}
};

// slist �� ��Ҹ� ����Ű�� ������ ��Ȱ�� �ϴ�
// Ŭ������ ����� ���ô�.
// "iterator" ��� �մϴ�.

template<typename T> 
class slist_iterator
{

public:

};

slist_iterator<int> p(500����); // 1��° ����� �ּҸ� �����ߴٰ�
++p;		// �����Ϳ� ������ ������� �̵��ϰ�
int n = *p; // �����Ϳ� ������ ������� ��� ����





template<typename T> class slist
{
	Node<T>* head = 0;
public:
	void push_front(const T& a)
	{
		head = new Node<T>(a, head);
	}
};

int main()
{
	slist<int> s;

	s.push_front(10);
	s.push_front(20);
	s.push_front(30);
	s.push_front(40);
	s.push_front(50); 
}