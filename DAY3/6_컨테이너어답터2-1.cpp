// 6_�����̳ʾ����2 - 1
#include <vector>

class Queue
{
	std::vector<int> c;
public:
	void pop()
	{
		c.pop_back(); // vector ���� pop_back() �����ϴ�.
	}
};
int main()
{
	Queue q;
}