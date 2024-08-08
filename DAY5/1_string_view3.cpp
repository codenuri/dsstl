#include <iostream>
#include <string>
#include <string_view>


// �Լ� ���ڷ� ���ڿ��� �ް� �ͽ��ϴ�.
// ���� ���� ���ڿ��� �б⸸ �ϸ� �˴ϴ�.
// => �ּ��� �ڵ带 ������ ���ô�.

void f1(std::string s)  {} // bad. ������� ������.


void f2(const std::string& s) { } // good. 

void f3(std::string_view s) { }   // best - C++17

int main()
{
	std::string s = "to be or not to be";

	// �Ʒ��� ���� ū ���̰� �����ϴ�.
	f2(s);
	f3(s);

	// �Ʒ��� ��찡 �ٽ��Դϴ�.
	f2("to be or not to be");
			// => std::string �� �ӽð�ü�� �����ǰ�
			// => string �����ڿ��� ���ڿ��� ������ ����
			// => �ӽð�ü�� f2 �� ���޵˴ϴ�.

	f3("to be or not to be");
			// => ��� �޸𸮿� �ִ� ���ڿ��� ����Ű�� �˴ϴ�.
}
