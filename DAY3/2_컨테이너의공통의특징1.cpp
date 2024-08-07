#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> v = { 1, 2, 3 };

	// ? 자리에 최선의 코드를 작성해 보세요( auto 제외 )
	
	// 1. vector 구현은  미래에 변경될수도 있다.
	// 
	// 2. size() 의 반환값에 사용한 정확한 타입은
	//    vector 의 설계자가 알고 있다.
	
	// 3. 그래서 vector 안에는 size_type 이라는 멤버 타입이 있다.

	std::vector<int>::size_type sz = v.size();
}

template<typename T, typename Alloc = std::allocator<T>>
class vector
{
public:
	using value_type = T;
	using size_type = std::size_t;

	size_type size() const {  .... }
};

