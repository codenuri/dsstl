#include <iostream>

template<typename T>
class Ptr
{
	T* obj;
	int* ref;

public:
	Ptr(T* p = 0) : obj(p) 
	{
		ref = new int;
		*ref = 1;
	}

	Ptr(const Ptr& other)
		: obj(other.obj), ref(other.ref)
	{
		++(*ref);
	}
	~Ptr() 
	{ 
		if (--(*ref) == 0)
		{
			delete obj;
			delete ref;
		}
	}


	T* operator->() { return obj; }
	T& operator*() { return *obj; }
	
};

int main()
{
	Ptr<int> p1 = new int;
	*p1 = 10;

	Ptr<int> p2 = p1;	

}


