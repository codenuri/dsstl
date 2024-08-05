#include <iostream>
#include <list>

template<typename C>
void f1(C& c)
{
	// ? ä�켼��
	typename C::value_type n = c.front();
	// => �����̳ʰ� �����ϴ� ����� Ÿ��
}
template<typename IT>
void f2(IT p)
{
	typename IT::value_type n = *p; 
				// �ݺ��� IT �� ����Ű�� Ÿ��
				// ��, ��ü�� �ݺ��ڸ� ����. raw pointer �ȵ�.

	typename std::iterator_traits<IT>::value_type n2 = *p;
				// ��ü�� �ݺ���, raw pointer ��� ����

	// C++20 ���� ���ڵ��� ������ �����˴ϴ�.
	std::iter_value_t<IT>  n3 = *p; // typename �ʿ� �����ϴ�.
									// :: �� �����ϴ�.
}

int main()
{
	std::list<int> s = { 1,2,3,4,5,6,7,8,9,10 };
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };

	f1(s); // �����̳� ����
	f2(s.begin()); // �ݺ��� ����(��ü��)
	f2(x);		   // �ݺ��� ����(raw pointer)	 


}

