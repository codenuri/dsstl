// callby1

struct Data
{
	int data[100];
};

void f1(Data a) {} // bad, ���纻�� ���� ������� �ֽ��ϴ�.
void f2(const Data& a) {} // ok

// ������ ���� �ڵ�� ?
void f3(int n)        { int k = n; } // good
void f4(const int& n) { int k = n; } // bad
	 // const int* p    int k = *p; �Դϴ�. * �� ���� �������

int main()
{
	Data d;
	f1(d);
	f2(d);

	int a = 0;
	f3(a);
	f4(a);
}