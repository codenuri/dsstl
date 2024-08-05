// insert2.cpp
#include <iostream>
#include <algorithm>
#include <list>

// 함수 버전

int main(int argc, char** argv)
{
	std::list<int> s1 = { 10,20,30,40,50 };
	std::list<int> s2 = { 1, 2, 3, 4, 5 };
	
	// #1. 아래 코드는 s1의 내용을 s2에 "덮어쓰기"
//	std::copy(s1.begin(), s1.end(), s2.begin());

	// #2. 아래 코드는 s2에 추가(s2.push_back) 한것
//	std::back_insert_iterator< std::list<int> > p(s2);
//	std::copy(s1.begin(), s1.end(), p );

	// 아래 한줄은 결국 위 2줄과 동일
	std::copy(s1.begin(), s1.end(), std::back_inserter(s2) );


	for (auto& n : s2)
		std::cout << n << std::endl; 


	std::list<int> s3;

//	std::copy( s1.begin(), s1.end(), s3.begin() ); 
				// runtime error
				// s3는 비어 있으므로 "덮어쓰기는 안됩니다."

	std::copy(s1.begin(), s1.end(), std::back_inserter(s3));
				// ok.. 

}
