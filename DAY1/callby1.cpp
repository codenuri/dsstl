// callby1

struct Data
{
	int data[100];
};

void f1(Data a) {}
void f2(Data a) {}

int main()
{
	Data d;
	f1(d);
	f2(d);
}