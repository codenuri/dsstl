#include <iostream>
#include <memory>

void foo(void* p) { free(p); }

int main()
{
	// 삭제자 변경
	std::shared_ptr<int> sp1(new int);
	std::shared_ptr<int> sp2 = std::make_shared<int>(0);
}







