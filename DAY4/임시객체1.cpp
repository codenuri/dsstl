// ¿”Ω√∞¥√º1

struct Point
{
	int x, y;

	Point(int a, int b) : x(a), y(b) {}
};

Point foo()
{
	Point pt(1,2);
	return pt;
}
int main()
{
	Point ret = foo();
}