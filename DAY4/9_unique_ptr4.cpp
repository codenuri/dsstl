#include <memory>
#include <iostream>

int main()
{
	std::unique_ptr<int> up(new int); // �ڿ��� ����
	std::shared_ptr<int> sp(new int); // �ڿ��� ����

	// ������ ������ ?
	std::shared_ptr<int> sp1 = up;	// error
	std::shared_ptr<int> sp2 = std::move(up); // ok

	std::unique_ptr<int> up1 = sp;	// error
	std::unique_ptr<int> up2 = std::move(sp); // error
}

// ������ "raw pointer" �� ����ϴ� "Alloc" �Լ���
// ����Ʈ �����ͷ� �����Ϸ��� �մϴ�.
// "shared_ptr" �� �ұ�� ? 
// "unique_ptr" �� �ұ�� ?


int* Alloc1()
{
	return new int;
}
std::shared_ptr<int> Alloc2() {	return std::make_shared<int>(0);}
std::unique_ptr<int> Alloc3() {	return std::make_unique<int>(0);}

int main()
{
	int* p = Alloc1();
	
	// ������ ã������
	// => Alloc2, 3 �� ��� �� Ÿ�� ��ȯ
	// => �ӽð�ü ���·� ��ȯ��
	// => �캯�� �ӽð�ü�̸� ���簡 �ƴ� "move" �˴ϴ�.
	std::shared_ptr<int> sp1 = Alloc2(); // std::move(shared) ok 
	std::unique_ptr<int> up1 = Alloc2(); // std::move(shared) error

	std::shared_ptr<int> sp2 = Alloc3(); // std::move(unique) ok
	std::unique_ptr<int> up2 = Alloc3(); // std::move(unique) ok

	// Alloc2 ó�� ����� : ȣ���ڴ� �ݵ�� shared_ptr�θ� �޾ƾ� �մϴ�.
	// Alloc3 ó�� ����� : ȣ���ڰ� �����Ҽ� �ֽ��ϴ�.
	//						=> ����. 
}