class Sample
{
public:
	void foo(int a) {}
};

int main()
{
	// #1. ��� �Լ��� �ּҸ� ��� ���
	// => �Ϲ� �Լ� �����Ϳ� Ŭ���� �̸��� �߰�
//	void(*f)(int) = &Sample::foo; // error
	void(Sample::*f)(int) = &Sample::foo; // ok

	// #2. ��� �Լ� �����ͷ� �Լ� ȣ���ϱ�

//	f(10); // error. ��ü�� ����.

	Sample s;
//	s.f(10); // error. s(Sample) �ȿ��� f �� ã�´�. f�� ����� �ƴ�.

	// .* : pointer to member operator ��� ������
//	s.*f(10); // error
			  // ������ �켱���� ����

	(s.*f)(10); // ok.. 

	// f1 : �Ϲ� �Լ� �����Ͷ�� ����
	// f2 : ��� �Լ� �����Ͷ�� ����

	f1(10);
	(obj.*f2)(10);

	// �Ϲ� �Լ� �����Ϳ� ��� �Լ� �����͸� 
	// �����ϰ� ����Ҽ� ������ ?
	// => C++17 std::invoke
	std::invoke(f1, 10);       // �Ϲ��Լ� �����ͷ� ȣ��
	std::invoke(f2, &obj, 10); // ����Լ� �����ͷ� ȣ��


	chronometry(&foo, 10); // �Ϲ��Լ������� ����
	chronometry(&Sample::foo, &obj, 10); // �Ϲ��Լ������� ����
}