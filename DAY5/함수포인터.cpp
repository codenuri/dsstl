class Sample
{
public:
	void foo(int a) {}
};

int main()
{
	// ��� �Լ��� �ּҸ� ��� ���
	// => �Ϲ� �Լ� �����Ϳ� Ŭ���� �̸��� �߰�
	void(*f)(int) = &Sample::foo;
}