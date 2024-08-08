#include <map>  
#include "show.h"

// set : 한개의 데이타(key) 를 tree 에 보관
// map : 2개(key-value 쌍) 을 tree 에 보관

// map : pair 를 저장하는 set,   key 값으로 value 를 저장

int main()
{
	std::map<std::string, std::string> m = { {"mon", "월요일"},
											 {"tue", "화요일"} };


	// 요소 넣기
	// 1. pair 만들어서 넣기
	std::pair<std::string, std::string> p1("wed", "수요일");

	m.insert(p1);

	// 2. make_pair
	m.insert(std::make_pair("thu", "목요일"));

	// 3. emplace
	m.emplace("fri", "금요일");

	// 4. [] 연산자 사용
	m["sat"] = "토요일"; // 대부분은 이렇게 사용

	//------------------------
	
	// #2. 반복자에 대해서
	auto p = m.find("wed"); // find(키값)

	// p를 사용해서 "wed : 수요일" 이라고 출력해보세요
	// 반복자 : "요소의 포인터 역활을 하는 객체"
	//          "map 의 요소는 pair"
	// 따라서, map 의 반복자는 "pair 의 포인터 처럼 사용!"

	std::cout << p->first << " : " << p->second << std::endl;




	// #3. [] 연산자
	// => 현재 m 에는 "sun" 이라는 키값이 없습니다.
	// => 아래 코드는 어떻게 될까요 ?
	std::cout << m["sun"] << std::endl; 
				// 1. "sun" 이 없으므로 실패
				// 2. "sun" - "" 의 쌍으로 새롭게 생성 

	
	// #4. map 의 모든 요소 열거
	for (auto& e : m)
	{
		// e 는 pair
		std::cout << e.first << " : " << e.second << std::endl;
	}
}




