#include <iostream>
#include <list>
#include <algorithm>


bool foo(int n ) { return n % 3 == 0; }

int main()
{
	std::list<int> s = { 1,2,6,4,5,3,7,8,9,10 };

	int k = 3; // ����ڰ� �Է��� ���̶�� ����

	// �־��� �������� ó�� ������ "k�� ���"�� ã��ʹ� !!!

	auto ret1 = std::find_if(s.begin(), s.end(), foo);

	// �� ����� �����Ϸ��� "find_if" �� ������ ���ڷ�
	// => "foo �Լ�" �� "�������� k" �� ���� ������ �־�� �Ѵ�.
	// 
	// => �Ϲ� �Լ��δ� �̱���� ����� ����.
	// => �Լ� ��ü�� �����Ѵ�.

	
}




