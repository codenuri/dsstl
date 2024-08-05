#include <iostream>
#include <list>

// past the end iterator

int main()
{
	std::list<int> s1 = { 1,2,3 };

	auto p1 = s1.begin();
	auto p2 = s1.end(); // ������ �������
						// past end the iterator

	*p1 = 10; // ok
//	*p2 = 10; // runtime error
			  // end()�� ���� �ݺ��ڴ� �� �뵵�θ� ����ؾ� �մϴ�.
			  // p1 == p2, p1 != p2 ���� �ڵ常 ���.
			  
	// [p1, p2)

	while (p1 != p2)
	{
		++p1;
	}

	// s.begin() == s.end() �� empty �� �ǹ�. 
	std::list<int> s3;
	if (s3.empty()) {}

	if (s3.begin() == s3.end()) {}	
}