#include <iostream>
#include <set>
#include <unordered_set>
#include "show.h"

int main()
{
//	std::set<int> s;
	std::unordered_set<int> s;

	s.insert(10);
	s.insert(35);
	s.insert(20);
	s.insert(25);	// set : 25 를 root 와 비교해서 왼쪽 또는 오른쪽 배치

					// unordered_set : 25 를 해쉬 함수에 보내서
					//				   bucket index 를 얻은후에
					//				   bucket 에 보관


	auto p = s.find(20);  // set : root 부터 이진 검색
						  // unordered_set : hash 함수로 보내서
							//				 index 를 얻어서 검색

	std::cout << *p << std::endl;

	show(s);	// set : tree 이므로 정렬되어 있음(크기순)
				// unordered_set : 정렬안됨(크기순 아님)
}

