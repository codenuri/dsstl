#include <memory>

int main()
{
	int* p1 = new delete;	// raw pointer 를 사용하면
	delete p1;				// 직접 delete 해야 합니다.

	std::shared_ptr<int> p2(new int);	// 스마트 포인터 사용시
										// p2가 파괴될때
										// 소멸자가 delete 해줍니다.
										// 개발자가 직접
										// delete 할 필요 없습니다.
}