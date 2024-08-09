#include <iostream>
#include <ratio>

// �м��� �����ϴ� Ŭ������ ������ ���ô�.
struct Rational
{
	std::size_t num; // ����
	std::size_t den; // �и�

	Rational(std::size_t n, std::size_t d)
		: num(n), den(d) {}
};

int main()
{
	// �Ʒ� �ڵ忡�� r1, r2 �� ���� Ÿ���Դϴ�.
	Rational r1(1, 10); // 1/10
	Rational r2(2, 10); // 2/10


	// C++ ǥ���� �м� Ŭ������ ���ø� �Դϴ�. std::ratio
	// �Ʒ� �ڵ忡�� r1, r2 �� �ٸ� Ÿ���Դϴ�.
	// => ��, ��� �м����� �ٸ� Ÿ���Դϴ�.

	std::ratio<1, 10> r1; // 1/10
	std::ratio<2, 10> r2; // 2/10 => 1/5
}


namespace std {

	//class template ratio
	template <std::size_t N, std::size_t D = 1>
	class ratio {
	public:
		typedef ratio<num, den> type;
		static constexpr std::size_t num;
		static constexpr std::size_t den;
	};

	// convenience SI typedefs         
	typedef ratio<1, 1000000000000000000000000> yocto;
	typedef ratio<1, 1000000000000000000000> zepto;
	typedef ratio<1, 1000000000000000000> atto;
	typedef ratio<1, 1000000000000000> femto;
	typedef ratio<1, 1000000000000> pico;
	typedef ratio<1, 1000000000> nano;
	typedef ratio<1, 1000000> micro;
	typedef ratio<1, 1000> milli;
	typedef ratio<1, 100> centi;
	typedef ratio<1, 10> deci;
	typedef ratio<10, 1> deca;
	typedef ratio<100, 1> hecto;
	typedef ratio<1000, 1> kilo;
	typedef ratio<1000000, 1> mega;
	typedef ratio<1000000000, 1> giga;
	typedef ratio<1000000000000, 1> tera;
	typedef ratio<1000000000000000, 1> peta;
	typedef ratio<1000000000000000000, 1> exa;
	typedef ratio<1000000000000000000000, 1> zetta;
	typedef ratio<1000000000000000000000000, 1> yotta;

}
