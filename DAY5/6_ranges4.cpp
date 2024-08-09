#include <iostream>
#include <vector>
#include <algorithm>
#include <ranges> // �� �ȿ� take_view ���� view �ֽ��ϴ�.
				  // C++20 ���� �ϼ���

// ��� view �� ��ø�ɼ� �ֽ��ϴ�.

int main()
{
	std::vector<int> v = { 1,2,3,7,8,9,4,5,6,10 };

	// #1. Ŭ���� ���� ���
	// => "std::ranges" ��� �̸��� namespace 
//	std::ranges::filter_view fv(v, [](int n) { return n % 2 == 0; });
//	std::ranges::take_view tv(fv, 3);
//	std::ranges::reverse_view rv(tv);
	

	// #2. �Լ� ���� ���
	// => "std::views" ��� �̸��� namespace 
	auto fv = std::views::filter(v, [](int n) { return n % 2 == 0; });

	auto tv = std::views::take(fv, 3);

	auto rv = std::views::reverse(tv);


	for (auto e : rv) // ��� ������ ������ 4, 8, 2
	{
		std::cout << e << ", ";
	}



}