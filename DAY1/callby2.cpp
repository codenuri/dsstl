// 반복자    : 
// 찾는 요소 :

template<typename InputIter, typename T>
InputIter find(InputIter  first, InputIter last, T c)
{
	while (first != last && *first != c)
		++first;
	return first;
}