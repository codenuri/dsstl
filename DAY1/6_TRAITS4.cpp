#include <iostream>
#include <list>

template<typename C>
void f1(C& c)
{
	// ? ä�켼��
	? n = c.front();
}
template<typename IT>
void f2(IT& p)
{
	? n = *p;
}

int main()
{
	std::list<int> s = { 1,2,3,4,5,6,7,8,9,10 };
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };

	f1(s); // �����̳� ����
	f2(s.begin()); // �ݺ��� ����(��ü��)
	f2(x);		   // �ݺ��� ����(raw pointer)	 


}

