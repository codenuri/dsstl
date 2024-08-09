#include <iostream>

class Meter
{
	int value;
public:
	Meter(int n) : value(n) {}
};
Meter operator""m(int v)
{
	Meter a(v);
	return a;
}

int main()
{
	Meter n = 3m;
}