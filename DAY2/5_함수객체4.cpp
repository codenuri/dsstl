       int Add1(int a, int b) { return a + b; }
inline int Add2(int a, int b) { return a + b; }

int main()
{
	int n1 = Add1(1, 2); // 1. ���ڸ� ��ӵ� ��ҿ� �ְ�
						 // 2. �Լ��� �̵� (call Add1)

	int n2 = Add2(1, 2);	// Add2 �� ���� �ڵ� ��ü�� �̰��� ġȯ
							// mov eax, 2
							// add eax, 1
							// mov n2, eax
							// => ���� : �������ϴ�.

	int(*f)(int, int) = &Add2;

//	if (������Է� == 1) f = &Add1;

	f(1, 2); // ? ȣ��
}

// 1. �ζ��� ġȯ�� ������ �ð��� ����Ǵ� �����Դϴ�.

// 2. �ζ��� �Լ��� �Լ� ������ ������ ��Ƽ� ȣ���ϸ�
//    �ζ��� ġȯ�ɼ� �����ϴ�.

