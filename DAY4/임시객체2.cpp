#include <iostream>

struct Counter
{
	int cnt = 0;

	Counter increment()
	{
		++cnt;
		return *this;
	}
};

int main()
{
	Counter c;
//	c.increment();
//	c.increment();
//	c.increment();

	c.increment().increment().increment();

	std::cout << c.cnt << std::endl;
}