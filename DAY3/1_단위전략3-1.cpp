// 1_��������3-1
#include <vector>
#include <iostream>

// ����� ���� �޸� �Ҵ��

// 1. �ݵ�� ���ø��� �ʿ�� ������, ��κ� �پ��� Ÿ�Կ� ����
//    �޸� �Ҵ��ؾ� �ϹǷ� ���ʻ� ���ø�����

template<typename T>
class debug_alloc
{
public:

};


int main()
{
	std::vector<int, debug_alloc<int> > v;

	std::cout << "------------------\n";

	v.resize(5); // �� ���� 5�� ���� �Ҵ�

	std::cout << "------------------\n";
}
