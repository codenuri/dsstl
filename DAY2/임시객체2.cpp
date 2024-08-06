class Point
{
	int x, y;
public:
	Point(int x, int y) : x(x), y(y) {}
};

void draw_line(const Point& from, const Point& to) {}

int main()
{
	// draw_line 을 사용해서 (1, 1) ~ (10,10) 에 선을 그려보세요

	// #1. 객체를 생성해서 전달.
	Point from(1, 1);
	Point to(10, 10);

	draw_line(from, to);

	// #2. 임시객체 형태로 전달
//	draw_line(Point(1, 1), Point(10, 10));
	draw_line(Point{ 1, 1 }, Point{ 10, 10 });

	// 임시객체
	// => 이름이 없는 객체
	// => "클래스 이름(생성자인자)" 형태로 만드는 객체

	Point p1(1, 1); // named object
	Point (1, 1);   // unnamed object ( 임시객체)
					// => 수명 : 자신을 선언한 문장의 끝에서 파괴

	// C++11 부터는 객체 생성시 () 대신 {} 사용가능합니다.
	Point p1{ 1, 1 };
	Point { 1, 1 };
}