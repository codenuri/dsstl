// 1_단위전략3-1
#include <vector>
#include <iostream>

// 사용자 정의 메모리 할당기

// 1. 반드시 템플릿일 필요는 없지만, 대부분 다양한 타입에 대해
//    메모리 할당해야 하므로 관례상 템플릿으로

// 2. 반드시 지켜야 하는 규칙(함수 이름등)이 있다.
// => C++ 표준문서로 약속되어 있다.
// => cppreference.com, Named Requirement 에서 Allocator 참고

template<typename T>
class debug_alloc
{
public:
	T* allocate(std::size_t size)
	{
		void* ptr = malloc(sizeof(T) * size);

		printf("[ debug alloc ] allocate, %p, %d cnt\n", ptr, size);

		return static_cast<T*>(ptr);
	}
	void deallocate(T* ptr, std::size_t size)
	{
		printf("[ debug alloc ] deallocate, %p, %d cnt\n", ptr, size);

		free(ptr);
	}

	// 위 2개 외에도 아래 3개가 있어야 합니다.
	// 관례적인 코드
	using value_type = T;
	debug_alloc() {}
	template<typename U> debug_alloc(const debug_alloc<U>&) {}
};
// ==, != 되도록 해야 합니다.
template<typename T>
bool operator==(const debug_alloc<T>& a1, const debug_alloc<T>& a2)
{
	return true;
}
template<typename T>
bool operator!=(const debug_alloc<T>& a1, const debug_alloc<T>& a2)
{
	return false;
}


int main()
{
	std::vector<int, debug_alloc<int> > v;

	std::cout << "------------------\n";

	v.resize(5); // 이 순간 5개 버퍼 할당

	std::cout << "------------------\n";
}
