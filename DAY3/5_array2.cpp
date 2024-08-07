#include <vector>
#include <algorithm>
#include "show.h"

// vector    : ����Ÿ ������ "��"�� �ϰ� �˴ϴ�.
// raw array : ����������� "stack" �� ����

// �� �Ҵ�/���� �� "stack" ���� ���� �ð��� �ɸ��� �˴ϴ�.

// ��� ����Ÿ�� ���ÿ� �����ϴ� �����̳ʸ� ������ ���ô�.

template<typename T, std::size_t N>
struct array
{
	T buff[N];

	using iterator = T*;

	iterator begin() { return buff ; }
	iterator end()   { return buff + N ; }

	std::size_t size() const { return N; }
};

#include <array> // �� �ȿ� �ִ� �ڵ尡 ���� �����մϴ�.

int main()
{
	// ����ü �ȿ� �迭�� �Ʒ� ó�� �ʱ�ȭ �����մϴ�.
//	array<int, 5> a = { 1,2,3,4,5 };
	std::array<int, 5> a = { 1,2,3,4,5 };

	auto sz = a.size();
}
