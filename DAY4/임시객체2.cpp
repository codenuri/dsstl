#include <iostream>

struct Counter
{
	int cnt = 0;

	void increment()
	{
		++cnt;
	}
};

int main()
{
	Counter c;
	c.increment();
	c.increment();
	c.increment();

	std::cout << c.cnt << std::endl;
}