// 반복자    : 크기가 크지 않습니다.
//            대부분 멤버 데이타는 포인터 한개로 구현
//			  함수 인자로 받을때 call by value 로 하는 것이 관례
// 
// 찾는 요소 : int, double 일수도 있지만
//            크기가 큰 타입일수도 있습니다.
//			  "const T&" 를 사용하는 것이 관례 입니다.

// cppreference.com 에서 std::find 검색해서 다시 확인해 보세요.

template<typename InputIter, typename T>
InputIter find(InputIter first, InputIter last, const T& c)
{
	while (first != last && *first != c)
		++first;
	return first;
}