// �ݺ���    : ũ�Ⱑ ũ�� �ʽ��ϴ�.
//            ��κ� ��� ����Ÿ�� ������ �Ѱ��� ����
//			  �Լ� ���ڷ� ������ call by value �� �ϴ� ���� ����
// 
// ã�� ��� : int, double �ϼ��� ������
//            ũ�Ⱑ ū Ÿ���ϼ��� �ֽ��ϴ�.
//			  "const T&" �� ����ϴ� ���� ���� �Դϴ�.

// cppreference.com ���� std::find �˻��ؼ� �ٽ� Ȯ���� ������.

template<typename InputIter, typename T>
InputIter find(InputIter first, InputIter last, const T& c)
{
	while (first != last && *first != c)
		++first;
	return first;
}