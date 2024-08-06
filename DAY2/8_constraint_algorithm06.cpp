#include <iostream>
#include <iterator>
#include <list>

// ��κ��� STL �˰����� "�����̳��� Ư���� ����(range)"�� ���ؼ�
// �����մϴ�.

// C++98 �� range
// => [first, last) �� �ݺ��� ������ ǥ���˴ϴ�.
// => first, last �� �ݵ�� ���� Ÿ���̾�� �մϴ�.

// C++20 �� range
// => [first, sentinel) �� ������ Ȯ��˴ϴ�.
// => sentinel �� first �� ���� Ÿ���� �ݺ��� �ϼ��� �ְ�
// => first �� ==, != ������ ������ ������ ��ü �ϼ��� �ֽ��ϴ�.


// C++98 find �� �Ʒ� ó��
// 1, 2 ��°�� ���ڰ� ���� Ÿ������ ����
/*
template<typename IT, typename T>
IT xfind(IT first, IT last, const T& value)
{
	while (first != last && *first != value)
		++first;

	return first;
}
*/
// C++20 �� find �� �Ʒ� ó�� 1, 2 �� ���� Ÿ���� �ٸ��� ����
template<typename IT, typename S, typename T>
IT xfind(IT first, S sentinel, const T& value)
{
	while (first != sentinel && *first != value)
		++first;

	return first;
}

int main()
{
	std::list<int> s = { 1,2,3,4,5,6,7,8,9,10 };

	std::counted_iterator ci(s.begin(), 5);

	auto ret = xfind(ci, std::default_sentinel, 4);

}