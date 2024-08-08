#include <iostream>

struct Counter
{
	int cnt = 0;

	Counter increment()
//	Counter& increment()
	{
		++cnt;
		std::cout << "increment : " << cnt << std::endl;
		return *this;
	}
	~Counter()              { std::cout << "~Counter()\n"; }
	Counter()               { std::cout << "Counter()\n"; }
	Counter(const Counter& other) : cnt(other.cnt) { std::cout << "Counter(const Counter&)\n"; }
};

int main()
{
	Counter c;
	c.increment();
	c.increment();
	c.increment();

	std::cout << "---------------------------\n";
	c.increment().increment().increment();
	std::cout << "---------------------------\n";

	std::cout << c.cnt << std::endl;
}