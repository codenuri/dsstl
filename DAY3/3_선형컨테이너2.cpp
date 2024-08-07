#include <vector> 
#include <deque>  
#include <list>   
#include "show.h"

const int size = 1'000'000;

std::vector<int> v;
std::list<int>   s;
std::deque<int>  d;


std::vector<int> v2;

void ex4()
{
	v2.reserve(size); // 메모리를 먼저 할당

	for (int i = 0; i < size; i++)
		v2.push_back(i);
}


void ex1()
{
	for (int i = 0; i < size; i++)
		v.push_back(i);
}

void ex2()
{
	for (int i = 0; i < size; i++)
		s.push_back(i);
}

void ex3()
{
	for (int i = 0; i < size; i++)
		d.push_back(i);
}

int main()
{
	// chronometry : 함수의 성능(소요시간)을 측정하는 함수
	// 사용법 : chronomery(함수이름, arg1, arg2....)

	chronometry(ex1);
	chronometry(ex2);
	chronometry(ex3);
	chronometry(ex4);

}
