#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> v = { 1, 2, 3 };

	// ? �ڸ��� �ּ��� �ڵ带 �ۼ��� ������( auto ���� )
	
	// 1. vector ������  �̷��� ����ɼ��� �ִ�.
	// 
	// 2. size() �� ��ȯ���� ����� ��Ȯ�� Ÿ����
	//    vector �� �����ڰ� �˰� �ִ�.
	
	// 3. �׷��� vector �ȿ��� size_type �̶�� ��� Ÿ���� �ִ�.

	std::vector<int>::size_type sz = v.size();
}

template<typename T, typename Alloc = std::allocator<T>>
class vector
{
public:
	using value_type = T;
	using size_type = std::size_t;

	size_type size() const {  .... }
};

