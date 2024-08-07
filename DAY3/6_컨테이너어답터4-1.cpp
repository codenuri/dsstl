#include <functional>

// STL 의 많은 요소가 "비교정책"을 변경할수 있게 설계되어 있습니다.

template<typename T>
void sort(T cmp) {}

template<typename T>
class priority_queue
{
};

int main()
{
	// sort 함수와 priority_queue 클래스의 인자로 
	// std::less<int> 보내 보세요.
}