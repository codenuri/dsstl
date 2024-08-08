#include <iostream>

// �Ʒ� �ڵ尡 std::unique_ptr �� ���� ����
// => ���� �����ڸ� "����"�ؼ�
// => ���� �ɼ� ������ �����
template<typename T>
class Ptr
{
	T* obj;
public:
	inline Ptr(T* p = 0) : obj(p) {}
	inline T* operator->() { return obj; }
	inline T& operator*() { return *obj; }
	inline ~Ptr() { delete obj; }

	// ����� ���� ����!
	Ptr(const Ptr&) = delete;
	Ptr& operator=(const Ptr&) = delete;
};

int main()
{
	Ptr<int> p1 = new int;
	*p1 = 100;
	std::cout << *p1 << std::endl;

//	Ptr<int> p2 = p1; // �� �ڵ带 ������ ���� ������ �� ���ô�
					  // ��, �̷��� ������� ���ϵ���
}


