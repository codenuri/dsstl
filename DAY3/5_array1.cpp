// 선형컨테이너 2 복사
#include <vector> 
#include <deque>  
#include <list>   
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

int main()
{
	chronometry(ex1);
	chronometry(ex2);

}
