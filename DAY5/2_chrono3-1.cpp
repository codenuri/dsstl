#include <iostream>
#include <chrono>
using namespace std::literals;

void sleep(std::chrono::milliseconds ns)
{
	std::cout << ns.count() << std::endl;
}

int main()
{
	// sleep 3밀리초 보내 보세요
}

