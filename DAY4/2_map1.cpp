#include <map>  
#include "show.h"

// set : �Ѱ��� ����Ÿ(key) �� tree �� ����
// map : 2��(key-value ��) �� tree �� ����

// map : pair �� �����ϴ� set,   key ������ value �� ����

int main()
{
	std::map<std::string, std::string> m = { {"mon", "������"},
											 {"tue", "ȭ����"} };


	// ��� �ֱ�
	// 1. pair ���� �ֱ�
	std::pair<std::string, std::string> p1("wed", "������");

	m.insert(p1);

	// 2. make_pair
	m.insert(std::make_pair("thu", "�����"));

	// 3. emplace
	m.emplace("fri", "�ݿ���");

	// 4. [] ������ ���
	m["sat"] = "�����"; // ��κ��� �̷��� ���

	//------------------------
	
	// #2. �ݺ��ڿ� ���ؼ�
	auto p = m.find("wed"); // find(Ű��)

	// p�� ����ؼ� "wed : ������" �̶�� ����غ�����
	// �ݺ��� : "����� ������ ��Ȱ�� �ϴ� ��ü"
	//          "map �� ��Ҵ� pair"
	// ����, map �� �ݺ��ڴ� "pair �� ������ ó�� ���!"

	std::cout << p->first << " : " << p->second << std::endl;




	// #3. [] ������
	// => ���� m ���� "sun" �̶�� Ű���� �����ϴ�.
	// => �Ʒ� �ڵ�� ��� �ɱ�� ?
	std::cout << m["sun"] << std::endl; 
				// 1. "sun" �� �����Ƿ� ����
				// 2. "sun" - "" �� ������ ���Ӱ� ���� 

	
	// #4. map �� ��� ��� ����
	for (auto& e : m)
	{
		// e �� pair
		std::cout << e.first << " : " << e.second << std::endl;
	}
}




