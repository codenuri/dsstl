#include <iostream>
#include <string>
using namespace std::literals; // �� �ȿ� 
							   // C++ ǥ���� ���̻縮�ͷ��� �ֽ��ϴ�.
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
	Meter n = 3_m; // operator""m(3) �� ã�� �˴ϴ�.

	float b = 3.0f;

	auto s = "hello"s; // std::string operator""s("hello")
}