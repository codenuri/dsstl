#include <iostream>
#include <list>
#include <algorithm>


bool foo(int n) { return n % 3 == 0; }


class IsDivide
{
	int value;
public:
	IsDivide(int n) : value(n) {}

	bool operator()(int n) 	{ return n % value == 0; }
};


int main()
{
	std::list<int> s = { 1,2,6,4,5,3,7,8,9,10 };

	int k = 3; 

	IsDivide f(k);  // f ��� ��ü�� ���� ��� ����Ÿ�� "k������"
	bool b = f(10); // 10 % value(k��)
					// => �ᱹ f �� "k���� ����"�� ���� ������. 

//	auto ret1 = std::find_if(s.begin(), s.end(), f);

	auto ret1 = std::find_if(s.begin(), s.end(), IsDivide{k} );

	// => ���ڵ�� �ᱹ "IsDidive �����Լ� ��ü�� main �������� k"
	//    �� ���� �����ϴ� �ڵ�

	// Closure : �ڽ��� ���Ե� ������ ���������� ĸ���Ҽ� �ִ�
	//			 �ɷ��� �ִ� �Լ�(��ü)

}




