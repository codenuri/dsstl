// lambda1.cpp
#include <iostream>
#include <algorithm>
#include <vector>
#include <functional> 

int main()
{
	std::vector<int> v = { 1,3,5,7,9,2,4,6,8,10 };

	std::sort(v.begin(), v.end(), [](int a, int b) {return a < b; });

	// �� ������ �����Ϸ��� �Ʒ� ó�� �����մϴ�.
	class CompilerGeneratedName
	{
	public:
		inline bool operator()(int a, int b)
		{
			return a < b;
		}
	};
	std::sort(v.begin(), v.end(), CompilerGeneratedName{} );

	// ���� ǥ������ ���� �����
	// => operator() �� ���� Ŭ������ �ӽð�ü �Դϴ�.
}









