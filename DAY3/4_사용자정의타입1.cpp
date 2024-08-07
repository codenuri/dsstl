#include <vector>
#include "show.h"

// 선형 컨테이너에 사용자 타입을 저장할때 주의 사항

// 1. 복사 생성자가 있는 모든 타입이 저장 가능합니다.
// 
// 2. 디폴트 생성자가 없다면, 컨테이너 생성시 2번째 인자로
//    "복사해서 사용할 객체" 를 전달하면 됩니다.

// 3. 포인터는 저장할수 있지만, reference 는 저장할수 없습니다.

class Point
{
	int x, y;
public:
	Point(int a, int b) : x(a), y(b) {}
};

int main()
{
//	std::vector<Point> v(10); // error. 
					// new Point(10) 에서 디폴트 생성자없다.

	Point pt(0, 0);
	std::vector<Point> v1(10, pt); // ok. pt 를 복사해서 생성
	
	std::vector<Point> v2(10, Point(0, 0)); // ok. 임시객체로
}



