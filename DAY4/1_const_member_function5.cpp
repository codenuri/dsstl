struct Compare
{
	// 함수 객체 만들때도
	// operator() 안에서 멤버 변경하는 것이 없으면(대부분 없습니다.)
	// 반드시 operator() 를 const member function 으로 하세요
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
	Compare cmp;	// () 연산자를 재정의 한 함수 객체

	bool b = cmp(1, 2); // ok

	sort( cmp );
}