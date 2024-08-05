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
	Node<T>* current;
public:
	slist_iterator(Node<T>* p = nullptr)
		: current(p) {}

	inline slist_iterator& operator++()
	{
		current = current->next; // �ٽ�
		return *this;
	}

	inline T& operator*() { return current->data ; }

	// find �� �������� : ++, *, ==, != �� �����ؾ� �մϴ�.

	inline bool operator==(const slist_iterator& other)
	{
		return current == other.current;
	}
	inline bool operator!=(const slist_iterator& other)
	{
		return current != other.current;
	}
};



//slist_iterator<int> p(500����); // 1��° ����� �ּҸ� �����ߴٰ�
//++p;		// �����Ϳ� ������ ������� �̵��ϰ�
//int n = *p; // �����Ϳ� ������ ������� ��� ����





template<typename T> class slist
{
	Node<T>* head = 0;
public:
	void push_front(const T& a)
	{
		head = new Node<T>(a, head);
	}

	// ���� list �� �ڽ��� ó���� ������ �������(0)�� ����Ű�� 
	// �ݺ��ڸ� ��ȯ�ϴ� �Լ��� �־�� �մϴ�.
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

	slist_iterator<int> p1 = s.begin(); // s �� 1��° ��Ҹ� ����Ű��
										// ������ ��Ȱ�� ��ü
	slist_iterator<int> p2 = s.end();   // ������ �������(0)

	// p1, p2 �� �����ʹ� �ƴ����� �����Ϳ� �����ϰ� ��밡���մϴ�.
	while (p1 != p2)
	{
		std::cout << *p1 << std::endl;
		++p1;
	}
}

