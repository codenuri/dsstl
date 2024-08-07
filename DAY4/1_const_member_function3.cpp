// ��� ��� �Լ�(const member function)
// => ������ �ƴ� �ʼ� ���� �Դϴ�.

// ��� �Լ��߿��� "���¸� �������� ���� ��� ��� �Լ�(getter)"
// �� �ݵ�� const member function ���� �ؾ� �մϴ�.


class Rect
{
	int x, y, w, h;
public:
	Rect(int x, int y, int w, int h)
		: x(x), y(y), w(w), h(h) 
	{ 
	}

//	int get_area() { return w * h; }	// ���� �ڵ尡 �ƴ�
										// Ʋ�� �ڵ�

	int get_area() const { return w * h; }
};


//void foo(Rect r) // call by value : ���纻�� ���� ������� �ֽ��ϴ�.
void foo(const Rect& r) // ok ���� �ڵ�
{
	int area = r.get_area();
}

int main()
{
	Rect r(1, 1, 10, 10);  // �����ü �ƴ�.

	int area = r.get_area(); // ok

	foo(r);
}