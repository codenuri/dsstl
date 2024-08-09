#include <iostream>

struct Point3D
{
	int x = 1;
	int y = 2;
	int z = 3;

	int* begin() { return &x ; }
	int* end()   { return &z + 1 ; }
};

int main()
{
	Point3D p;

	for (auto e : p)
	{
		std::cout << e << ", ";
	}
	// 빌드하면 에러 있습니다.
	// => 에러 메세지 예측해 보세요
	// => 그리고 확인해 보세요
}