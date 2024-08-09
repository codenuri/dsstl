#include <iostream>

class S
{
public:
	S(const char* s)
	{
		std::cout << "S() È£ÃâµÊ\n";
	}
};

void foo(const S& s) {}

int main()
{
//	S s("AA");
//	foo(s);

	foo("AA");
}