#include <iostream>
#include <list>
#include <algorithm>

int main()
{
	std::list<int> s = { 1,2,3,4,5,6,7,3,9,10 };

//	auto first = s.begin();
//	auto last  = s.end();

//	auto first = std::make_reverse_iterator( s.end() );
//	auto last = std::make_reverse_iterator( s.begin());

	// �Ʒ� 2���� �� 2�ٰ� ������ �����մϴ�.
	auto first = s.rbegin(); // std::make_reverse_iterator( s.end() );
	auto last  = s.rend();

	auto ret1 = std::find(first, last, 3);

	// reverse iterator ���п� ��� �˰�����
	// "������" ���ε� ���� �����մϴ�.
	auto ret2 = std::find(s.begin(),  s.end(), 3);
	auto ret3 = std::find(s.rbegin(), s.rend(), 3);

	
}
