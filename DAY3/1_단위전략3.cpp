#include <memory> // std::allocator 사용하기 위한 헤더

template<typename T,							// 저장할 요소의 타입
	     typename Alloc = std::allocator<T> >   // 메모리 할당기
class vector
{
	T* buff = nullptr;
	int size;

	Alloc ax;	// 메모리 할당기 객체
				// 앞으로 vector 의 모든 멤버 함수에서는
				// 메모리 할당/해지가 필요 하면
				// ax 의 멤버 함수를 사용하기로 약속합니다.

public:
	vector(int sz) : size(sz)
	{
		buff = ax.allocate(size);
		//....
	}
	~vector()
	{
		ax.deallocate(buff, size);
		//....
	}
};
int main()
{
	vector<int> v(4);
}


