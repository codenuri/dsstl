#include <iostream>
#include <vector>
#include "show.h"
#include <set> 

int main()
{
	std::set<int> s;

	s.insert(20);
	s.insert(30);
	s.insert(15);

	
	// �Ʒ� �ڵ忡 ���ؼ� ���غ�����
	// => ���� �˻�
	// => s.begin() ���� ++ �����ڷ� �̵�
	// => "equality(���ϼ�)" �˻�
	//    ã���� "==" �����ڷ� 
	auto ret1 = std::find(s.begin(), s.end(), 30);


	// set(tree)�� ���� �˻��� �ؾ� ȿ�����̴�.
	// => ���� �˻�
	// => root ��� ���� ũ�⸦ ���ؼ� �˻�
	// => "equivalency(���)" �˻�
	//    ũ���� �ʰ� ������ ������ "ã�Ҵ�"
	auto ret2 = s.find(30);
}
/*
template<typename T, 
		 typename Pr = std::less<T>,
	     typename Alloc = std::allocator<T>>
class set
{
	Pr cmp; // �� �Լ� ��ü
public:
	iterator find(const T& e)
	{
		if (cmp(root, e) == true)
			������ �ڽ����� �̵�;

		else if ( cmp( e, root ) == true )
			�������� �̵�

		else 
			ã�Ҵ�.
	}
};

*/



