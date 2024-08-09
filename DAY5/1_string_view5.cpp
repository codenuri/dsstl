#include <iostream>
#include <string>
using namespace std::literals; // 이 안에 
							   // C++ 표준의 접미사리터럴이 있습니다.
							   // s, sv, i, min, ns, ms, us
			
class Meter
{
	int value;
public:
	Meter(int n) : value(n) {}
};
Meter operator""_m(unsigned long long v)
{
	Meter a( static_cast<int>(v) );
	return a;
}
int main()
{
	Meter n = 3_m; // operator""m(3) 을 찾게 됩니다.

	float b = 3.0f;

	auto s = "hello"s; // std::string operator""s("hello")
}