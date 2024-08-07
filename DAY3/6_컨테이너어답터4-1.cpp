#include <functional>

// STL �� ���� ��Ұ� "����å"�� �����Ҽ� �ְ� ����Ǿ� �ֽ��ϴ�.
template<typename T>
void sort(T cmp) {}

template<typename T>
class priority_queue
{
	T cmp;	// ���� ����/������ ũ�� �񱳸� ���ؼ�
			// cmp ���
};

int main()
{
	// sort �Լ��� priority_queue Ŭ������ ���ڷ� 
	// std::less<int> ���� ������.

	// �Լ� ���� :  ��ü�� �����ؾ� �մϴ�.
	sort( std::less<int> );   // error. std::less<int>  �� Ÿ��
	sort( std::less<int>() ); // ok.    std::less<int>() �� ��ü


	// Ŭ���� ���ø� ���� : Ÿ���� �����ؾ� �մϴ�.

	priority_queue< std::less<int>() > pq1; // error.
	priority_queue< std::less<int>   > pq2; // ok
}