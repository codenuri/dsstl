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

int main()
{
	// ������ ����ϱ� ���� ���̴� ���� ?
	square<int>(3);	// �� �ڵ尡 ��Ȯ�� ǥ���. Ÿ�����ڸ� �����ϴ� �ڵ�
	square(3);		// Ÿ������ ������, �Լ� ���ڸ� ����
					// �����Ϸ��� Ÿ�� ����


	list<int> s1(10, 3);	// Ÿ�����ڸ� ����. 

	list s2(10, 3);	// Ÿ�����ڸ� ����. �����ڸ� ���ؼ� �߷� ?
					// C++17 ���� ����.
}
