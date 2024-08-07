#include <vector>
#include <iostream>
#include <algorithm>
#include "show.h"

int main()
{
	// 1. 생성
	std::vector<int> v1;	// 요소가 없는 vector. 크기 0

	std::vector<int> v2(10);// 10개를 0으로 

	std::vector<int> v3(10, 3); // 10개 요소를 3으로
	std::vector<int> v4{10, 3}; // 2개를 10, 3으로
	
	std::vector<int> v5(v3);	// v3과 동일하게

	// 아래 3개는 모두 동일합니다.
	std::vector<int> v6 = { 1,2,3 };
	std::vector<int> v7{ 1,2,3 };
	std::vector v8{ 1,2,3 }; // C++17 부터

	// 2. 삽입, 
	v1.push_front(0); // vector 만 안됨
	v1.push_back(0);
//	v1.insert(위치를 나타내는반복자, 0); // 
	v1.insert(std::next(s.begin(), 3), 0); // 

	// 3. 제거
	v1.pop_front(); // vector 만 안됨
	v1.pop_back();
	v1.erase(반복자);			// 이 위치 제거
	v1.erase(반복자A, 반복자B);  // [반복자A, 반복자B) 제거

	v1.clear(); // 모두 제거

	// 4. 접근
	int n1 = v1.front();
	int n2 = v1.back();
	int n3 = v1[1];   // list 안됨
	int n4 = v1.at(1);// list 안됨

	auto first = v1.begin();
	*first = 10; // 반복자로 접근

	// 5. 요소 변경
	v1.assign( v2.begin(), v2.end() );
				// v1의 모든 요소를 교체 

	// 6. 정보 얻기
	bool b = v1.empty();
	auto sz1 = v1.size();
	auto sz2 = v1.max_size();
	auto ax = v1.get_allocator();// v1이 사용하는 메모리 할당기 얻기
}