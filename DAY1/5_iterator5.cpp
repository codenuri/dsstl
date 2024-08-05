#include <iostream>
#include <list>

// past the end iterator

int main()
{
	std::list<int> s1 = { 1,2,3 };

	auto p1 = s1.begin();
	auto p2 = s1.end(); // 마지막 다음요소
						// past end the iterator

	*p1 = 10; // ok
//	*p2 = 10; // runtime error
			  // end()로 꺼낸 반복자는 비교 용도로만 사용해야 합니다.
			  // p1 == p2, p1 != p2 등의 코드만 사용.
			  
	// [p1, p2)

	while (p1 != p2)
	{
		++p1;
	}

	// s.begin() == s.end() 는 empty 를 의미. 
	std::list<int> s3;
	if (s3.empty()) {}

	if (s3.begin() == s3.end()) {}	
}