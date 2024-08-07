// 6_컨테이너어답터2 - 1
#include <vector>

class Queue
{
	std::vector<int> c;
public:
	void pop()
	{
		c.pop_back(); // vector 에는 pop_back() 없습니다.
	}
};
int main()
{
	Queue q;
}