#include <memory>
#include <iostream>

// �ڿ����� ��å�� ���� �Լ���ü
struct Freer
{
	void operator()(void* p) const
	{
		free(p);
		std::cout << "Freer operator()\n";
	}
};

int main()
{
	std::unique_ptr<int> up1(new int);   // ok
	
//	std::unique_ptr<int>   up2(new int[10]); // bug
	std::unique_ptr<int[]> up2(new int[10]); // ok. C++14

	// �ٽ� : �������� Ÿ���� ���ø� ���ڷ� ����
	std::unique_ptr<int, Freer> up3(static_cast<int*>(malloc(sizeof(int)));


	// shared_ptr vs unique_ptr
	
	// shared_ptr<Ÿ��>           sp( �޸��Ҵ�, ������) : �� ������ ���ڷ� ����
	// unique_ptr<Ÿ��,������Ÿ��> up( �޸��Ҵ�)        : �� ���ø� ���ڷ� ����


	// �����ڴ� �Ҹ��ڿ��� ����ϰ� �˴ϴ�.
	// => shared_ptr �� control block�� �����ߴٰ�
	// => �Ҹ��ڿ��� ���

	// unique_ptr �� control block �� �����ϴ�.
	// => template ���ڷ� ������ �������� �ʾƵ� ����. �ӵ��� ����
	
}

template<typename T, typename D = std::default_delete<T>>
class unique_ptr
{
	T* obj;
public:
	~unique_ptr()
	{
		D d;	// template ���ڷ� ���޵� Ÿ���� ��ü ������
		d(obj); // ����. 
	}
};

// shared_ptr �� ��ó�� �ϸ� �ȵǳ��� ??

// shared_ptr : �����ڸ� �����ص� ���� Ÿ��. �����̳ʿ� ���� ���� ����
// unique_ptr : �����ڸ� �����ϸ� �ٸ� Ÿ��. 

std::shared_ptr<int> sp1(�޸��Ҵ�, ������1);
std::shared_ptr<int> sp2(�޸��Ҵ�, ������2); // sp1, sp2 ���� Ÿ��

std::unique_ptr<int, ������1> up1;
std::unique_ptr<int, ������2> up2; // up1, up2 �� �ٸ� Ÿ��