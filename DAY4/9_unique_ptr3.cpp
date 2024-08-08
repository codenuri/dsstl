#include <memory>
#include <iostream>

// 자원해지 정책을 담은 함수객체
struct Freer
{
	void operator()(void* p) const
	{
		free(p);
		std::cout << "Freer operator()\n";
	}
};

int main()
{
	std::unique_ptr<int> up1(new int);   // ok
	
//	std::unique_ptr<int>   up2(new int[10]); // bug
	std::unique_ptr<int[]> up2(new int[10]); // ok. C++14

	// 핵심 : 삭제자의 타입을 템플릿 인자로 전달
	std::unique_ptr<int, Freer> up3(static_cast<int*>(malloc(sizeof(int)));


	// shared_ptr vs unique_ptr
	
	// shared_ptr<타입>           sp( 메모리할당, 삭제자) : 즉 생성자 인자로 전달
	// unique_ptr<타입,삭제자타입> up( 메모리할당)        : 즉 템플릿 인자로 전달


	// 삭제자는 소멸자에서 사용하게 됩니다.
	// => shared_ptr 의 control block에 보관했다가
	// => 소멸자에서 사용

	// unique_ptr 은 control block 이 없습니다.
	// => template 인자로 받으면 보관하지 않아도 가능. 속도도 증가
	
}

template<typename T, typename D = std::default_delete<T>>
class unique_ptr
{
	T* obj;
public:
	~unique_ptr()
	{
		D d;	// template 인자로 전달된 타입의 객체 생성후
		d(obj); // 삭제. 
	}
};

// shared_ptr 도 위처럼 하면 안되나요 ??

// shared_ptr : 삭제자를 변경해도 같은 타입. 컨테이너에 같이 보관 가능
// unique_ptr : 삭제자를 변경하면 다른 타입. 

std::shared_ptr<int> sp1(메모리할당, 삭제자1);
std::shared_ptr<int> sp2(메모리할당, 삭제자2); // sp1, sp2 같은 타입

std::unique_ptr<int, 삭제자1> up1;
std::unique_ptr<int, 삭제자2> up2; // up1, up2 는 다른 타입