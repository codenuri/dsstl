// vector �� ����� ���� ������ ���ô�.

template<typename T>
class vector
{
	T* buff = nullptr;
	int size;
public:
	vector(int sz) : size(sz)
	{
		buff = new T[size];
		//....
	}
	~vector()
	{
		delete[] buff;
		//....
	}
};
int main()
{
	vector<int> v(4);
}


// C++ ���� �پ��� �޸� �Ҵ� ����� �ֽ��ϴ�.
// => new, malloc, calloc, system call, pooling...

// vector �� ���鶧 �� �ڵ� ó�� �����
// vector �� ����ڰ� �޸� �Ҵ� ����� �����Ҽ� ���� �˴ϴ�.
// => ����ڰ� �޸� �Ҵ� ����� �����Ҽ� �ְ� �Ϸ��� ��� �ϴ� ���� ������� ?