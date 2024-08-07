#include <list>
#include <vector>

// STL�� ��� �����̳��� ������ Ư¡

int main()
{
	std::list<int> s = { 1,2,3 };

	// #1. ��� �Լ� �� �ƴ϶� ��� Ÿ���� �ִ�.
	std::list<int>::value_type n = s.front();
	std::list<int>::size_type sz = s.size();


	// #2. ��ȯ�� ���Ÿ� ���ÿ� ���� �ʴ´�.
	// => ���� �������� "���º���" �� ���ؼ��� �̷��� ���� �Ҽ� �ۿ� ����.
	int n = s.back();	// ��ȯ��, ��� ���Ŵ� �ȵ�
	s.pop_back();		// ���Ÿ�, ��ȯ�� �ȵ�(��ȯŸ�� void)


	// #3. ���� ����(policy base design)�� ���� ����Ѵ�.
	std::vector<int, debug_alloc<int>> v;
}