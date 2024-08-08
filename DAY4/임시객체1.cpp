// 임시객체1
struct Point
{
	int x, y;
	Point(int a, int b) : x(a), y(b) {}
};

Point pt(1, 2);

Point foo()
{
//	Point pt(1,2);
	return pt;
}

Point& goo() // 임시객체를 리턴하지 말고, pt 자체를 반환하라는 의미
{			 // 단, pt 가 지역변수 라면 이렇게 하면 안됩니다.
	return pt;
}

int main()
{
//	Point ret = foo();

	foo().x = 10; // error. "임시객체.x = 10" 인데, 
				  //        임시객체는 등호의 왼쪽에 올수 없습니다.
	goo().x = 10; // ok pt.x = 10
}

// 핵심 #1 : 함수가 "값 타입" 으로 반환하면 임시객체를 반환하게 됩니다.
// 핵심 #2 : 함수가 "참조 타입" 으로 반환하면 임시객체가 생성되지 않습니다