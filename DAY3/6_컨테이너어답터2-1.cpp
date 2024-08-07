// 6_컨테이너어답터2 - 1
#include <vector>
/*
class Queue
{
	std::vector<int> c;
public:
	void pop()
	{
		c.pop_front(); // error. vector 에는 pop_front() 없습니다.
	}
};

int main()
{
	Queue q;
}
*/

template<typename T>
class Queue
{
	std::vector<T> c;
public:
	void pop()
	{
		c.pop_front(); // 
	}
};

int main()
{
	Queue<int> q;

	q.pop();
}

// 지연된 인스 턴스화
// => 클래스 템플릿 으로 부터 실제 클래스 만들때
// => 사용된 멤버 함수만 "인스턴스화" 된다는 개념