#include <iostream>
#include <chrono>

// duration ���� : Ư�� ������ ����(tick count)�� ǥ���ϴ� �ڷᱸ��
// 
//				   ���ϳ��� �����ϰ�, 
//				   ���ø� ���ڷ� ���� Ÿ�԰� ������ ���� �޴� �ڷ� ����
// 
//				  10�� => 1���� 10��
//					   => 1/1000���� 10000��..

int main()
{
	// 1. duration ���
	std::chrono::duration<int, std::ratio<1, 100>>  d1(2); // 1/100 * 2
	std::chrono::duration<int, std::ratio<1, 1000>> d2(d1);

	std::cout << d2.count() << std::endl; // 20


	using Meter = std::chrono::duration<int, std::ratio<1, 1>>;
	using CentiMeter = std::chrono::duration<int, ?>;
	using KiloMeter  = std::chrono::duration<int, ? >;

	KiloMeter km(1);

	Meter m(km);
	CentiMeter cm(m);

	std::cout << m.count() << std::endl; // ?
	std::cout << cm.count() << std::endl; // ?


}
