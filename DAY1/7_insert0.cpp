template<typename T>
T square(T a)
{
	return a * a;
}

template<typename T>
class list
{
public:
	list(int sz, T value) {}
};

// Ŭ���� ���ø��� ���� ����ϸ� C++17 �������� �ݵ�� Ÿ�����ڸ�
// �����ؾ� �մϴ�.
// �׷���, Ÿ�����ڰ� ������ ���϶��� �ֽ��ϴ�.
// �׷����� �Ʒ� ó�� �Լ� ���ø��� �����ϸ� ���մϴ�.

template<typename T>
list<T> make_list(int sz, T value)
{
	return list<T>(sz, value);
}


int main()
{
	// ������ ����ϱ� ���� ���̴� ���� ?
	square<int>(3);	// �� �ڵ尡 ��Ȯ�� ǥ���. Ÿ�����ڸ� �����ϴ� �ڵ�
	square(3);		// Ÿ������ ������, �Լ� ���ڸ� ����
					// �����Ϸ��� Ÿ�� ����


	list<int> s1(10, 3);	// Ÿ�����ڸ� ����. 

//	list s2(10, 3);	// Ÿ�����ڸ� ����. �����ڸ� ���ؼ� �߷� ?
					// C++17 ���� ����.
					// C++14 ������ �ȵ�.

	auto s3 = make_list(10, 3);
}
