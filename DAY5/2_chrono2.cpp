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


	using Meter      = std::chrono::duration<int, std::ratio<1, 1>>;
	using CentiMeter = std::chrono::duration<int, std::ratio<1, 100>>;
//	using KiloMeter  = std::chrono::duration<int, std::ratio<1000,1>>;

	using KiloMeter = std::chrono::duration<int,  std::kilo >;
											// chrono1.cpp �Ʒ��ҽ�

	KiloMeter km(1);
	Meter m(km);
	CentiMeter cm(m);

	std::cout << m.count() << std::endl; // 1000
	std::cout << cm.count() << std::endl; // 100000

	Meter m2(1230);
//	KiloMeter km2 = m2; // error. ����Ÿ �ս� �߻�

	KiloMeter km2 = std::chrono::duration_cast<KiloMeter>(m2);


	using seconds = std::chrono::duration<int, std::ratio<1, 1>>;
	using minutes = std::chrono::duration<int, std::ratio<60, 1>>;
}
