// lambda2.cpp
#include <iostream>
#include <algorithm>
#include <vector>
#include <functional> 

int main()
{
	// ���� Ȱ��
	// #1. std::sort() ���� �˰��� ���ڷ� ����
	// #2. auto ������ ��Ƽ� �Լ� ó�� ���(�ζ��� �Լ��� ����)

	auto f = [](int a, int b) { return a + b; };
		    // class AAA{ operator()(int, int) }; 
		    // AAA{}  <= �ӽð�ü ����
			// �ᱹ �� �ڵ��
			// "AAA f" ��ü�� �����Ѱ�

	int n1 = f(10, 20);
	int n2 = f.operator()(10, 20); // �̷��� �ص� �˴ϴ�.
									// �ᱸ �Լ� ��ü �̹Ƿ�!


}









