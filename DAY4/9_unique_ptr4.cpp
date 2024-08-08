#include <memory>
#include <iostream>

int main()
{
	std::unique_ptr<int> up(new int); // 자원의 독점
	std::shared_ptr<int> sp(new int); // 자원의 공유

	// 다음중 에러는 ?
	std::shared_ptr<int> sp1 = up;	// error
	std::shared_ptr<int> sp2 = std::move(up); // ok

	std::unique_ptr<int> up1 = sp;	// error
	std::unique_ptr<int> up2 = std::move(sp); // error
}

// 기존에 "raw pointer" 를 사용하던 "Alloc" 함수를
// 스마트 포인터로 변경하려고 합니다.
// "shared_ptr" 로 할까요 ? 
// "unique_ptr" 로 할까요 ?


int* Alloc1()
{
	return new int;
}
std::shared_ptr<int> Alloc2() {	return std::make_shared<int>(0);}
std::unique_ptr<int> Alloc3() {	return std::make_unique<int>(0);}

int main()
{
	int* p = Alloc1();
	
	// 에러를 찾으세요
	// => Alloc2, 3 는 모두 값 타입 반환
	// => 임시객체 형태로 반환됨
	// => 우변이 임시객체이면 복사가 아닌 "move" 됩니다.
	std::shared_ptr<int> sp1 = Alloc2(); // std::move(shared) ok 
	std::unique_ptr<int> up1 = Alloc2(); // std::move(shared) error

	std::shared_ptr<int> sp2 = Alloc3(); // std::move(unique) ok
	std::unique_ptr<int> up2 = Alloc3(); // std::move(unique) ok

	// Alloc2 처럼 만들면 : 호출자는 반드시 shared_ptr로만 받아야 합니다.
	// Alloc3 처럼 만들면 : 호출자가 선택할수 있습니다.
	//						=> 권장. 
}