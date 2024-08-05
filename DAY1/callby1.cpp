// callby1

struct Data
{
	int data[100];
};

void f1(Data a) {} // bad, 복사본에 대한 오버헤드 있습니다.
void f2(const Data& a) {} // ok

// 다음중 좋은 코드는 ?
void f3(int n)        { int k = n; } // good
void f4(const int& n) { int k = n; } // bad
	 // const int* p    int k = *p; 입니다. * 에 따른 오버헤드

int main()
{
	Data d;
	f1(d);
	f2(d);

	int a = 0;
	f3(a);
	f4(a);
}