#include <array>

int main()
{
	std::array<int, 5> a = { 1,2,3,4,5 };

	// #1. "raw array" �� ������ ������ �޸� ����
	// #2. ���ɵ� ���� ����
	// #3. ������ ��� �Լ��� �־ "raw array" ���ٴ� ��
	// #4. ����/����, ũ�� ������� �Ҽ� �����ϴ�.

	auto sz = a.size();
	auto first = a.begin();

	a.push_back(10); // error
	a.resize(10); // error

}