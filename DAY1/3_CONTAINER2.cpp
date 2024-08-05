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

	inline slist_iterator& operator++()
	{
		current = current->next; // 핵심
		return *this;
	}

	inline T& operator*() { return current->data ; }

	// find 에 보내려면 : ++, *, ==, != 가 가능해야 합니다.

	inline bool operator==(const slist_iterator& other)
	{
		return current == other.current;
	}
	inline bool operator!=(const slist_iterator& other)
	{
		return current != other.current;
	}
};



//slist_iterator<int> p(500번지); // 1번째 요소의 주소를 보관했다가
//++p;		// 포인터와 동일한 방식으로 이동하고
//int n = *p; // 포인터와 동일한 방식으로 요소 접근





template<typename T> class slist
{
	Node<T>* head = 0;
public:
	void push_front(const T& a)
	{
		head = new Node<T>(a, head);
	}

	// 이제 list 는 자신의 처음과 마지막 다음요소(0)을 가리키는 
	// 반복자를 반환하는 함수가 있어야 합니다.
	slist_iterator<T> begin() { return slist_iterator<T>(head); }
	slist_iterator<T> end()   { return slist_iterator<T>(0); }
};

int main()
{
	slist<int> s;

	s.push_front(10);
	s.push_front(20);
	s.push_front(30);
	s.push_front(40);
	s.push_front(50); 

	slist_iterator<int> p1 = s.begin(); // s 의 1번째 요소를 가리키는
										// 포인터 역활의 객체
	slist_iterator<int> p2 = s.end();   // 마지막 다음요소(0)

	// p1, p2 는 포인터는 아니지만 포인터와 동일하게 사용가능합니다.
	while (p1 != p2)
	{
		std::cout << *p1 << std::endl;
		++p1;
	}
}

