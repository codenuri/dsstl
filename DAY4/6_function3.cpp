#include <iostream>
#include <string>
#include <map>
#include <functional>
#include <vector>
using namespace std::placeholders;


class NotificationCenter
{
	using HANDLER = std::function<void(int)>;

	std::map<std::string, std::vector<HANDLER> > m;
public:
	void add_observer(const std::string& key, HANDLER h)
	{
		m[key].push_back(h);
	}

	void post_notification_with_name(const std::string& key, int hint)
	{
		for (auto& f : m[key]) // m[key] �� ����� vector<HANDLER>
		{
			// f �� HANDLER ��, std::function<void(int)>
			f(hint);
		}
	}
};

void foo(int hint)         { std::cout << "foo : " << hint << std::endl; }
void goo(int hint, int id)
{ 
	std::cout << "goo : " << hint << ", " << id << std::endl;
}

int main()
{
	// IOS �� ���̺귯���� cocoa touch �� �ִ� �뺸���͸� ����� ���ô�.
	NotificationCenter nc;

	nc.add_observer("LOWBATTERY", &foo);

	nc.add_observer("LOWBATTERY", [](int a) { std::cout << "lambda\n"; });

	nc.add_observer("LOWBATTERY",     std::bind(&goo, _1, 11));
	nc.add_observer("DISCONNET_WIFI", std::bind(&goo, _1, 12));


	// ���͸� ����ʿ��� ���͸��� ����������
	nc.post_notification_with_name("LOWBATTERY", 30);
}




