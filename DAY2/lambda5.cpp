#include <iostream>
#include <list>
#include <algorithm>


bool foo(int n) { return n % 3 == 0; }


class IsDivide
{
	int value;
public:
	IsDivide(int n) : value(n) { } 

	bool operator()(int n) { return n % value == 0; }
};


int main()
{
	std::list<int> s = { 1,2,6,4,5,3,7,8,9,10 };

	int k = 3;
	auto ret1 = std::find_if(s.begin(), s.end(), IsDivide{ k });


	// ����ǥ���ľȿ����� main �� ���������� �ٷ� ��밡��
	// => ��, ĸ�ĸ� ǥ���ؾ� �մϴ�.
	auto ret2 = std::find_if(s.begin(), s.end(), 
					[k](int n) { return n % k == 0; });

	// �� ���� ǥ������ ����
	class CompilerGeneratedName
	{
		int value;
	public:
		CompilerGeneratedName(int n) : value(n) { }

		bool operator()(int n) { return n % value == 0; }
	};
	auto ret3 = std::find_if(s.begin(), s.end(),
		CompilerGeneratedName{k} );
}




