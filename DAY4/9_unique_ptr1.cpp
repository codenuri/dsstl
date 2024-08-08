#include <iostream>

// 아래 코드가 std::unique_ptr 의 구현 원리
// => 복사 생성자를 "삭제"해서
// => 복사 될수 없도록 만든것
template<typename T>
class Ptr
{
	T* obj;
public:
	inline Ptr(T* p = 0) : obj(p) {}
	inline T* operator->() { return obj; }
	inline T& operator*() { return *obj; }
	inline ~Ptr() { delete obj; }

	// 복사와 대입 삭제!
	Ptr(const Ptr&) = delete;
	Ptr& operator=(const Ptr&) = delete;
};

int main()
{
	Ptr<int> p1 = new int;
	*p1 = 100;
	std::cout << *p1 << std::endl;

//	Ptr<int> p2 = p1; // 이 코드를 컴파일 에러 나오게 해 봅시다
					  // 즉, 이렇게 사용하지 못하도록
}


