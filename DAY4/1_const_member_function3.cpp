// 상수 멤버 함수(const member function)
// => 선택이 아닌 필수 문법 입니다.

// 멤버 함수중에서 "상태를 변경하지 않은 모든 멤버 함수(getter)"
// 는 반드시 const member function 으로 해야 합니다.


class Rect
{
	int x, y, w, h;
public:
	Rect(int x, int y, int w, int h)
		: x(x), y(y), w(w), h(h) 
	{ 
	}

//	int get_area() { return w * h; }	// 나쁜 코드가 아닌
										// 틀린 코드

	int get_area() const { return w * h; }
};


//void foo(Rect r) // call by value : 복사본에 대한 오버헤드 있습니다.
void foo(const Rect& r) // ok 좋은 코드
{
	int area = r.get_area();
}

int main()
{
	Rect r(1, 1, 10, 10);  // 상수객체 아님.

	int area = r.get_area(); // ok

	foo(r);
}