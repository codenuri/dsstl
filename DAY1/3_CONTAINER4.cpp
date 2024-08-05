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

	using iterator = slist_iterator<T>;

	iterator begin() { return iterator(head); }
	iterator end() { return iterator(0); }
};

// 2_ALGORITHM6.cpp 에서 find 만 복사해 오세요
template<typename T1, typename T2>
T1 find(T1  first, T1 last, T2 c)
{
	while (first != last && *first != c)
		++first;
	return first;
}

int main()
{
	slist<int> s;

	s.push_front(10);
	s.push_front(20);
	s.push_front(30);
	s.push_front(40);
	s.push_front(50);

	slist<int>::iterator p1 = find(s.begin(), s.end(), 30);

	if (p1 == s.end())
	{
		std::cout << "검색실패\n";
	}
	else
	{
		std::cout << "검색 성공 : " << *p1 << std::endl;
	}
}
// 반복자 덕분에 
// find 는 배열 뿐 아니라 "slist 에서 선형검색" 을 수행할수
// 있습니다.
// => 다른 자료구조도 반복자만 지원하면 ok.. 


