// 1_��������3-1
#include <vector>
#include <iostream>

// ����� ���� �޸� �Ҵ��

// 1. �ݵ�� ���ø��� �ʿ�� ������, ��κ� �پ��� Ÿ�Կ� ����
//    �޸� �Ҵ��ؾ� �ϹǷ� ���ʻ� ���ø�����

// 2. �ݵ�� ���Ѿ� �ϴ� ��Ģ(�Լ� �̸���)�� �ִ�.
// => C++ ǥ�ع����� ��ӵǾ� �ִ�.
// => cppreference.com, Named Requirement ���� Allocator ����

template<typename T>
class debug_alloc
{
public:
	T* allocate(std::size_t size)
	{
		void* ptr = malloc(sizeof(T) * size);

		printf("[ debug alloc ] allocate, %p, %d cnt\n", ptr, size);

		return static_cast<T*>(ptr);
	}
	void deallocate(T* ptr, std::size_t size)
	{
		printf("[ debug alloc ] deallocate, %p, %d cnt\n", ptr, size);

		free(ptr);
	}

	// �� 2�� �ܿ��� �Ʒ� 3���� �־�� �մϴ�.
	// �������� �ڵ�
	using value_type = T;
	debug_alloc() {}
	template<typename U> debug_alloc(const debug_alloc<U>&) {}
};
// ==, != �ǵ��� �ؾ� �մϴ�.
template<typename T>
bool operator==(const debug_alloc<T>& a1, const debug_alloc<T>& a2)
{
	return true;
}
template<typename T>
bool operator!=(const debug_alloc<T>& a1, const debug_alloc<T>& a2)
{
	return false;
}


int main()
{
	std::vector<int, debug_alloc<int> > v;

	std::cout << "------------------\n";

	v.resize(5); // �� ���� 5�� ���� �Ҵ�

	std::cout << "------------------\n";
}
