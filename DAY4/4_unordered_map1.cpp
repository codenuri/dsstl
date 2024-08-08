#include <iostream>
#include <string>
#include <unordered_map>

// map           : pair 을 set(tree) 에 보관
// unordered_map : pair 를 unordered_set(hash) 에 보관

int main()
{
//	std::map<std::string, std::string> m = { {"mon", "월요일"},
//											 {"tue", "화요일"} };


	std::unordered_map<std::string, std::string> m = { {"mon", "월요일"},
											 {"tue", "화요일"} };


	std::pair<std::string, std::string> p1("wed", "수요일");

	m.insert(p1);

	m.insert(std::make_pair("thu", "목요일"));

	m.emplace("fri", "금요일");

	m["sat"] = "토요일"; // 대부분은 이렇게 사용

	//------------------------

	auto p = m.find("wed"); // find(키값)

	std::cout << p->first << " : " << p->second << std::endl;



	std::cout << m["sun"] << std::endl;

	for (auto& e : m)
	{
		std::cout << e.first << " : " << e.second << std::endl;
	}


}


