#include <iostream>
#include <string>
#include <unordered_map>

// map           : pair �� set(tree) �� ����
// unordered_map : pair �� unordered_set(hash) �� ����

int main()
{
//	std::map<std::string, std::string> m = { {"mon", "������"},
//											 {"tue", "ȭ����"} };


	std::unordered_map<std::string, std::string> m = { {"mon", "������"},
											 {"tue", "ȭ����"} };


	std::pair<std::string, std::string> p1("wed", "������");

	m.insert(p1);

	m.insert(std::make_pair("thu", "�����"));

	m.emplace("fri", "�ݿ���");

	m["sat"] = "�����"; // ��κ��� �̷��� ���

	//------------------------

	auto p = m.find("wed"); // find(Ű��)

	std::cout << p->first << " : " << p->second << std::endl;



	std::cout << m["sun"] << std::endl;

	for (auto& e : m)
	{
		std::cout << e.first << " : " << e.second << std::endl;
	}


}


