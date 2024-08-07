// 선형컨테이너 2 복사
#include <vector> 
#include <deque>  
#include <list>   
#include <array>
#include "show.h"

const int size = 1'000'000;

std::vector<int> v(10, 0);
int x[10] = { 0 };


void ex1()
{
	for (int i = 0; i < size; i++)
	{
		v[0] = i;
	}
}

void ex2()
{
	for (int i = 0; i < size; i++)
	{
		x[0] = i;
	}
}


void use_vector()
{
	std::vector<int> v1(10);
//	v1[0] = 0;
}

void use_array()
{
	int x1[10] = { 0 };
//	x1[0] = 0;
}

void use_std_array()
{
	std::array<int, 10> x1 = { 0 };

	//	x1[0] = 0;
}
void ex3()
{
	for (int i = 0; i < size; i++)
	{
		use_vector();
	}
}
void ex4()
{
	for (int i = 0; i < size; i++)
	{
		use_array();
	}
}
void ex5()
{
	for (int i = 0; i < size; i++)
	{
		use_std_array();
	}
}
int main()
{
	chronometry(ex1);
	chronometry(ex2);
	chronometry(ex3);
	chronometry(ex4);
	chronometry(ex5);
}
