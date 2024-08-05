class Test
{
public:
	enum { value = 1 };
	using DWORD = int; // typedef int DWORD
};
int p = 0;

template<typename T> void foo(T a)
{
	// �Ʒ� 2�ٿ��� * �� �ǹ̸� ������ ������(1. ���ϱ�, 2. ������ ���� ����)
	Test::value * p;	// 1 * p �̹Ƿ� "���ϱ�" �ǹ�
	Test::DWORD * p;	// int* p ��, ������ ������ ����

	// "Ŭ�����̸�::�̸�" ���� "�̸�"
	// 1. ���ϼ��� �ְ�
	// 2. Ÿ���ϼ��� �ִ�.

	// �Ʒ� �ڵ� ������ ������
	// Dependent name : ���ø� ���� T�� �����ؼ� ������ �̸�
	// => �����Ϸ��� �⺻������ "��" ���� �ؼ��մϴ�.
	T::value * p;
//	T::DWORD * p1; // error. DWORD �� ������ �ؼ��ϴ� ���
					// p1 �̶�� �̸��� �˼� ���� �ȴ�.

	typename T::DWORD* p1; // dependent name ��
						   // "��"�� �ƴ� "Ÿ��"�̶��
							// �˷��ִ� ��
}

int main()
{
	Test t;
	foo(t);
}