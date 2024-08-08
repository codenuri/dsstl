// 8_shared_ptr1-1
#include <memory>

int main()
{
	int* raw_pointer = new int;

	// 아래 코드를 생각해 보세요
	// => 동일한 객체(메모리)에 대해서
	// => control block 이 별도로 2개 생성됩니다.
	std::shared_ptr<int> sp1(raw_pointer);
	std::shared_ptr<int> sp2(raw_pointer);

	// 스마트 포인터 관련 격언
	// "자원의 주소를 raw pointer 에 담지 말라!"
	// "자원의 주소는 즉시 스마트 포인터에 담아야 한다."
}