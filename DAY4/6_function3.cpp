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
		for (auto& f : m[key]) // m[key] 의 결과는 vector<HANDLER>
		{
			// f 는 HANDLER 즉, std::function<void(int)>
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
	// IOS 용 라이브러리인 cocoa touch 에 있는 통보센터를 만들어 봅시다.
	NotificationCenter nc;

	nc.add_observer("LOWBATTERY", &foo);

	nc.add_observer("LOWBATTERY", [](int a) { std::cout << "lambda\n"; });

	nc.add_observer("LOWBATTERY",     std::bind(&goo, _1, 11));
	nc.add_observer("DISCONNET_WIFI", std::bind(&goo, _1, 12));


	// 배터리 모듈쪽에서 배터리가 부족해지면
	nc.post_notification_with_name("LOWBATTERY", 30);
}




