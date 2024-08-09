#include <iostream>

class S
{
public:
	S(const char* s)
	{
		std::cout << "S() 호출됨\n";
	}
};

void foo(const S& s) {}

int main()
{
//	S s("AA");
//	foo(s);

	foo("AA");
		// => S 참조를 요구하는데, 인자는 문자열!!!
		// => S의 생성자가 문자열을 받을수 있으므로
		// => S의 생성자에 문자열을 보내서 임시객체 생성!!
		// => 임시객체를 foo 에 전달
}