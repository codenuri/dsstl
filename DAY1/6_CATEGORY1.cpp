#include <forward_list>
#include <list>

int main()
{
	std::forward_list<int> s1 = { 1,2,3 }; // �̱� ��ũ�� ����Ʈ

	std::list<int> s2 = { 1,2,3 };		   // ���� ��ũ�� ����Ʈ

	auto p1 = s1.begin();
	auto p2 = s2.begin();
	
	// �Ʒ� �ڵ忡�� ������ ã������
	++p1;
	--p1;	// error. �ڷᱸ�� Ư����
			// �̱۸���Ʈ �ݺ��ڴ� -- ������ �ɼ� ����
	++p2;
	--p2;

}