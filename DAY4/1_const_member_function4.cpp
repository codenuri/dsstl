class Point
{
	int x, y;
public:
	Point(int x, int y) : x(x), y(y) {}

	// 멤버 함수중 "내부적으로 멤버 데이타를 변경하지 않은 것은"
	// "반드시 const member function" 이어야 합니다.

	// 아래 처럼 ==, !=, < 등의 연산자재정의도 모두 const 멤버 함수
	bool operator==(const Point& other) const 
	{
		return x == other.x && y == other.y;
	}
};

void foo(const Point& p1, const Point& p2)
{
	bool b = (p1 == p2); // p1.operator==(p2)
}

int main()
{
	Point p1(1, 1);
	Point p2(2, 2);

	if ( p1 == p2 ) // p1.operator==(p2)
	{
	}

	foo(p1, p2);
}




