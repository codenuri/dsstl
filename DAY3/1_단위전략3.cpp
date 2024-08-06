#include <memory> // std::allocator ����ϱ� ���� ���

template<typename T,							// ������ ����� Ÿ��
	     typename Alloc = std::allocator<T> >   // �޸� �Ҵ��
class vector
{
	T* buff = nullptr;
	int size;

	Alloc ax;	// �޸� �Ҵ�� ��ü
				// ������ vector �� ��� ��� �Լ�������
				// �޸� �Ҵ�/������ �ʿ� �ϸ�
				// ax �� ��� �Լ��� ����ϱ�� ����մϴ�.

public:
	vector(int sz) : size(sz)
	{
		buff = ax.allocate(size);
		//....
	}
	~vector()
	{
		ax.deallocate(buff, size);
		//....
	}
};
int main()
{
	vector<int> v(4);
}


