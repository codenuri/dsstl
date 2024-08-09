#include <iostream>

void foo(int& a) { a = 200; }

template<typename F, typename T>
void forward(T arg)
{
	foo(arg);
}

int main()
{
	int n = 10;

	// ��ǥ : forward ����ؼ� n �� foo ���� ���纻 ���� ������ ���ô�.
//	forward(n); // ����, ���纻 ����

//	forward(&n); // �ּҷ� ����. 
				// 1. forward ���� ���纻 �����ȵ�
				// 2. int* arg �� n�� �ּҸ� ����..
				// 3. �׷���, int* => int& �� ���޵ɼ� �����Ƿ� ����. 

//	std::reference_wrapper<int> r(n); // 1. r �� n �� �ּҸ� ����
									  // 2. r �� int& �� ��ȯ�� ����
//	forward(r);


	forward( std::ref(n) ); // �� 2�ٰ� ����
							// std::ref �� reference_wrapper �� ������ִ�
							// �Լ� ( object generator ����)


	std::cout << n << std::endl;  
}


// std::reference_wrapper �� �ǹ�!!

// "call by value" �� ����Ǿ� �ִ� ����(�Լ�)�� ����Ҷ�

// ���ڸ� reference �� �����Ҷ� ���

// ���� ����ϰ� ���ؼ� "std::ref()" ����