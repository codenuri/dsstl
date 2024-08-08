#include <iostream>

struct Counter
{
	int cnt = 0;

	Counter increment()
	{
		++cnt;
		return *this;
	}
	~Counter()              { std::cout << "~Counter()\n"; }
	Counter()               { std::cout << "Counter()\n"; }
	Counter(const Counter&) { std::cout << "Counter(const Counter&)\n"; }
};

int main()
{
	Counter c;
//	c.increment();
//	c.increment();
//	c.increment();

	std::cout << "---------------------------\n";
	c.increment().increment().increment();
	std::cout << "---------------------------\n";

	std::cout << c.cnt << std::endl;
}