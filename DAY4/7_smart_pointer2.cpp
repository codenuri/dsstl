#include <memory>

int main()
{
	int* p1 = new delete;	// raw pointer �� ����ϸ�
	delete p1;				// ���� delete �ؾ� �մϴ�.

	std::shared_ptr<int> p2(new int);	// ����Ʈ ������ ����
										// p2�� �ı��ɶ�
										// �Ҹ��ڰ� delete ���ݴϴ�.
										// �����ڰ� ����
										// delete �� �ʿ� �����ϴ�.
}