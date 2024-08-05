#include <iostream>


template<typename T> struct Node
{
	T     data;
	Node* next;

	Node(const T& a, Node* n) : data(a), next(n) {}
};


template<typename T>
class slist_iterator
{
	Node<T>* current;
public:
	slist_iterator(Node<T>* p = nullptr)
		: current(p) {}

	inline slist_iterator& operator++()
	{
		current = current->next; 
		return *this;
	}

	inline T& operator*() { return current->data; }

	inline bool operator==(const slist_iterator& other)
	{
		return current == other.current;
	}
	inline bool operator!=(const slist_iterator& other)
	{
		return current != other.current;
	}
};





template<typename T> class slist
{
	Node<T>* head = 0;
public:
	void push_front(const T& a)
	{
		head = new Node<T>(a, head);
	}

	// 규칙 : 모든 컨테이너(자료구조를 구현한 클래스)
	//       는 자신의 반복자 이름을 약속된 형태인 "iterator" 로
	//       외부 노출해야 합니다.

	using iterator = slist_iterator<T>;
					// typedef slist_iterator<T> iterator 의미


	iterator begin() { return iterator(head); }
	iterator end() { return iterator(0); }
};

int main()
{
	slist<int> s;

	s.push_front(10);
	s.push_front(20);
	s.push_front(30);
	s.push_front(40);
	s.push_front(50);

	slist<int>::iterator p1 = s.begin();
	slist<int>::iterator p2 = s.end();

	while (p1 != p2)
	{
		std::cout << *p1 << std::endl;
		++p1;
	}
}

