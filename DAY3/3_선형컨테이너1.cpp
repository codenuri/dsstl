// ���� �����̳� ( sequence container )
// => ��Ұ� ���Ե� ������ �����ϸ鼭 ���ٷ� �����Ǵ� �����̳�

// C++98 ���� 3��
#include <vector>  // ���ӵ� �޸�, �������� �ݺ���
#include <deque>   // ���ӵ� �޸𸮿� ����, �������� �ݺ���
#include <list>    // ������ �޸�, ����� �ݺ���


// C++11 �߰��� 2��
#include <forward_list> // ������ �ݺ���
#include <array>		// �������� �ݺ���

#include "show.h"

int main()
{
	// #1. �޸� ����
	std::vector<int> v = { 1,2,3,4,5 }; // ���ӵ� �޸�
	std::list<int>   s = { 1,2,3,4,5 }; // ������ �޸�
	std::deque<int>  d = { 1,2,3,4,5 }; // vector �� list�� ����
										// ���ӵ� �޸𸮸� �ٽ� list��


	// #2. ������ ���� �����մϴ�.( ��� �Լ� �̸� ����)
	// => ����� ���� ����
	// => ������ �ٸ���.
	// �˻� : vector�� ���� ������
	// �߰����� : list �� �� ������ �ִ�. �� ��Ȳ�� ���� �ٸ��� �ִ�.
	v.push_back(5);
	s.push_back(5);
	d.push_back(5);

	// #3. �������� �ִٸ� �ǵ����� ����
	v.push_front(5); // error. vector �� ���� ����/���� �ȵ�
	s.push_front(5); // ok
	d.push_front(5); // ok

	v[0] = 10;  // ok
	s[0] = 10;	// error. list �� [] �ȵ�.
	d[0] = 10;	// ok

}
