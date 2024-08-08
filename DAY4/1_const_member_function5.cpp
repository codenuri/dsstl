struct Compare
{
	// �Լ� ��ü ���鶧��
	// operator() �ȿ��� ��� �����ϴ� ���� ������(��κ� �����ϴ�.)
	// �ݵ�� operator() �� const member function ���� �ϼ���
	bool operator()(int a, int b) const 
	{
		return a < b;
	}
};

template<typename T>
void sort(const T& cmp)
{
	cmp(1, 2); // cmp.operator()(1,2)
}

int main()
{
	Compare cmp;	// () �����ڸ� ������ �� �Լ� ��ü

	bool b = cmp(1, 2); // ok

	sort( cmp );
}