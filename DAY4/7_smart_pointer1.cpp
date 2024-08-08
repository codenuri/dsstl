// Java/C# : 사용자가 메모리를 직접 관리할 필요 없다
//           new 로 메모리(객체)를 할당 하지만
//			 더이상 사용하지 않은 메모리(객체)는
//           garbage collector 에 의해서 자동으로 수집된다.

// C++ : new 로 할당한 메모리(객체)는 더이상 사용하지 않는다면
//       사용자가 직접 제거 해야 한다.
//       다양한 실수를 할수 있다.

int main()
{
	// 문제점 #1. memory leak
	// => 할당된 메모리를 해지 하지 않은 경우
	int* p1 = new int;


	// 문제점 #2. dangling pointer
	// => 이미 삭제된 메모리를 가리키는 포인터를 사용
	int* p2 = new int;
	delete p2;

	if (p2 != nullptr)
	{
		*p2 = 10;	// dangling pointer 사용
	}
	
	// 문제점 #3. 잘못된 delete, 2번 delete
	int* p3 = new int[10];
	int* p4 = p3 + 1;

	delete p4;  // 잘못된 주소 delete, 
				// undefined

	delete p3;
	delete p3; // 두번 delete, undefined 
}