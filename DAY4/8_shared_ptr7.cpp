#include <iostream>
#include <memory>

class Car
{
public:
	void Go() {}
	~Car() {std::cout << "~Car" << std::endl;	}
};
int main()
{
	std::shared_ptr<Car> sp;
	std::weak_ptr<Car>   wp;

	{
		std::shared_ptr<Car> p(new Car);
	
		//sp = p; 
		wp = p; 
		
		std::cout << p.use_count() << std::endl; // 1
	}

	std::cout << "------" << std::endl;

	// wp 로 Car 접근 코드

	std::shared_ptr<Car> sp2 = wp.lock();

	if (sp2)
	{
		sp2->Go();
	}
}

