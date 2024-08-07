// 6_�����̳ʾ����2 - 1
#include <vector>
/*
class Queue
{
	std::vector<int> c;
public:
	void pop()
	{
		c.pop_front(); // error. vector ���� pop_front() �����ϴ�.
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

// ������ �ν� �Ͻ�ȭ
// => Ŭ���� ���ø� ���� ���� ���� Ŭ���� ���鶧
// => ���� ��� �Լ��� "�ν��Ͻ�ȭ" �ȴٴ� ����