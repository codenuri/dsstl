#include <stack>
#include <queue> // queue, priority_queue
#include "show.h"

// 3 ���� �����̳� ����Ͱ� �ֽ��ϴ�.

int main()
{
	std::stack<int> s1;

	s1.push(10);
	int n1 = s1.top();
	s1.pop();

	std::queue<int> q1;

	q1.push(10);
	int n2 = q1.front(); // ����!! top() �� �ƴ� front()
	q1.pop();

}