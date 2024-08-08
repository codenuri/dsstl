#include <memory>
#include <iostream>

int main()
{
	// #1. 복사 될수 없다.
	std::unique_ptr<int> up1(new int);
//	std::unique_ptr<int> up2 = up1; // error

	// #2. std::move 는 가능
	// => 자원을 같이 사용하는 것이 아니라
	// => 전달한것!!
	std::unique_ptr<int> up2 = std::move(up1); // ok


	// #3. 오버헤드 거의 없음
	std::cout << sizeof(up2) << std::endl; // raw pointer 과 같은 크기

	
	// #4. std::make_unique 권장
	// => control block 은 없지만
	// => 자원할당과 스마트포인터 생성을 한번에 해서 안정성 증가
	std::unique_ptr<int> up3 = std::make_unique<int>(0);

}