#include <iostream>
#include <set>
#include <unordered_set>
#include "show.h"

int main()
{
//	std::set<int> s;
	std::unordered_set<int> s;

	s.insert(10);
	s.insert(35);
	s.insert(20);
	s.insert(25);	// set : 25 �� root �� ���ؼ� ���� �Ǵ� ������ ��ġ

					// unordered_set : 25 �� �ؽ� �Լ��� ������
					//				   bucket index �� �����Ŀ�
					//				   bucket �� ����


	auto p = s.find(20);  // set : root ���� ���� �˻�
						  // unordered_set : hash �Լ��� ������
							//				 index �� �� �˻�

	std::cout << *p << std::endl;

	show(s);	// set : tree �̹Ƿ� ���ĵǾ� ����(ũ���)
				// unordered_set : ���ľȵ�(ũ��� �ƴ�)
}

