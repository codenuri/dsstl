#include <iostream>
#include <functional>
using namespace std::placeholders;

void f1(int a)               { printf("f1 : %d\n", a); }
void f2(int a, int b)        { printf("f2 : %d, %d\n", a, b);}
void f3(int a, int b, int c) { printf("f3 : %d, %d, %d\n", a, b, c); }
void f4(int a, int b, int c, int d) { printf("f4 : %d, %d, %d, %d\n", a, b, c, d);}

class Sample
{
public:
    void f2(int a, int b) {}
};

int main()
{
    // #1. �Լ� ������ : �������� �����մϴ�.
//  void(*f)(int);  // ���ڰ� �Ѱ��� �Լ��� �ּҸ� ������ �ֽ��ϴ�.
//  f = &f1; // ok
//  f = &f2; // error



    // #2. std::function
    // => �Լ� �����͸� �Ϲ�ȭ�� Ŭ���� ���ø�
    // 
    // ���� : std::function<��ȯŸ��(����Ÿ��)> 

    std::function<void(int)> f;
    f = &f1;
    f(10);  // f1(10);


    // std::function �� �Լ� �����Ϳ� �����ϰ� ����Ҽ� �ֽ��ϴ�.
    // �׸���, std::bind ����� ������ �ֽ��ϴ�.

//  f = &f2; // error.

    f = std::bind(&f2, 3, _1);
    f(5); // f2(3, 5)


    // f �� ���ڰ� �Ѱ��� std::function �̹Ƿ�
    // => ��� �Լ��� ���� �Ѱ� ���·� std::bind �ؾ� �մϴ�.

    f = std::bind(&f4, 3, 2, _1, 9) ;
    f(5); // f4(3, 2, 5, 9) ������ �غ�����


    Sample s;
    f = std::bind(&Sample::f2, &s, _1, 7) ;
    f(5); // s.f2(5, 7) �ǵ��� �غ�����

    // �ᱹ "std::function<void(int)>" Ÿ���� f ����

    // => ���ڰ� int �Ѱ� �� �Լ� �Ӿƴ϶�
    // => "�Ѱ� �̻��� ��� �Լ�"�� ������ �ֽ��ϴ�.
}













//
