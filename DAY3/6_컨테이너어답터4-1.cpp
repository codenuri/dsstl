#include <functional>

// STL 의 많은 요소가 "비교정책"을 변경할수 있게 설계되어 있습니다.
template<typename T>
void sort(T cmp) {}

template<typename T>
class priority_queue
{
	T cmp;	// 이제 삽입/삭제시 크기 비교를 위해서
			// cmp 사용
};

int main()
{
	// sort 함수와 priority_queue 클래스의 인자로 
	// std::less<int> 보내 보세요.

	// 함수 인자 :  객체를 전달해야 합니다.
	sort( std::less<int> );   // error. std::less<int>  는 타입
	sort( std::less<int>() ); // ok.    std::less<int>() 는 객체


	// 클래스 템플릿 인자 : 타입을 전달해야 합니다.

	priority_queue< std::less<int>() > pq1; // error.
	priority_queue< std::less<int>   > pq2; // ok
}