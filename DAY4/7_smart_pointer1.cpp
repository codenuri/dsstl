// Java/C# : ����ڰ� �޸𸮸� ���� ������ �ʿ� ����
//           new �� �޸�(��ü)�� �Ҵ� ������
//			 ���̻� ������� ���� �޸�(��ü)��
//           garbage collector �� ���ؼ� �ڵ����� �����ȴ�.

// C++ : new �� �Ҵ��� �޸�(��ü)�� ���̻� ������� �ʴ´ٸ�
//       ����ڰ� ���� ���� �ؾ� �Ѵ�.
//       �پ��� �Ǽ��� �Ҽ� �ִ�.

int main()
{
	// ������ #1. memory leak
	// => �Ҵ�� �޸𸮸� ���� ���� ���� ���
	int* p1 = new int;


	// ������ #2. dangling pointer
	// => �̹� ������ �޸𸮸� ����Ű�� �����͸� ���
	int* p2 = new int;
	delete p2;

	if (p2 != nullptr)
	{
		*p2 = 10;	// dangling pointer ���
	}
	
	// ������ #3. �߸��� delete, 2�� delete
	int* p3 = new int[10];
	int* p4 = p3 + 1;

	delete p4;  // �߸��� �ּ� delete, 
				// undefined

	delete p3;
	delete p3; // �ι� delete, undefined 
}