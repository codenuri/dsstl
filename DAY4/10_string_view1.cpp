#include <iostream>

// ���ڿ� �迭 vs ���ڿ� ������

int main()
{
	// �Ʒ� 2���� �������� ������ ������. 
	// => ���ڿ��� �ִ� �޸� ��ġ
	// 
	// #1. �޸� ����
	char sa[] = "hello";

//	char* sp  = "hello"; // C �� ok. C++ �� ����
	const char* sp = "hello"; // C++ �� ok

	*sa = 'a'; // ok
//	*sp = 'a'; // runtime error. ����޸𸮿� ����
				// const char* �� ���� ������ ����.

	// #2. ���ڿ� ����
	char sa1[] = "hello";
	char sa2[] = "hello";

	const char* sp1 = "hello";
	const char* sp2 = "hello";

	printf("%p\n", sa1);
	printf("%p\n", sa2); // sa1 �� �ٸ� �ּ�
	printf("%p\n", sp1);
	printf("%p\n", sp2); // sp1�� �����ּ�
	
	
}