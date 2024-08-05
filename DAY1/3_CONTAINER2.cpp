#include <iostream>


template<typename T> struct Node
{
	T     data;
	Node* next;

	Node(const T& a, Node* n) : data(a), next(n) {}
};

// slist 의 요소를 가리키는 포인터 역활을 하는
// 클래스를 만들어 봅시다.
// "iterator" 라고 합니다.

template<typename T> 
class slist_iterator
{
	Node<T>* current;
public:
	slist_iterator(Node<T>* p = nullptr)
		: current(p) {}

	slist_iterator& operator++()
	{
		current = current->next; // 핵심
		return *this;
	}

	T& operator*() { return current->data ; }

	// find 에 보내려면 : ++, *, ==, != 가 가능해야 합니다.

	bool operator==(const slist_iterator& other)
	{
		return current == other.current;
	}
};



slist_iterator<int> p(500번지); // 1번째 요소의 주소를 보관했다가
++p;		// 포인터와 동일한 방식으로 이동하고
int n = *p; // 포인터와 동일한 방식으로 요소 접근





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