#include <stack>
#include <queue> // queue, priority_queue
#include "show.h"

// 3 개의 컨테이너 어답터가 있습니다.

int main()
{
	std::stack<int> s1;

	s1.push(10);
	int n1 = s1.top();
	s1.pop();

	std::queue<int> q1;

	q1.push(10);
	int n2 = q1.front(); // 주의!! top() 이 아닌 front()
	q1.pop();

}