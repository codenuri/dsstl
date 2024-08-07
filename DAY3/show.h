#include <iostream>
#include <string>
#include <functional>
#include <iterator>
#include <algorithm>
#include <chrono>

template<typename Container> void show(const Container& c)
{
	for (const auto& n : c)
		std::cout << n << ", ";
	std::cout << std::endl;
}

template<typename InputIter>
void show(InputIter first, InputIter last)
{
	std::copy(first, last,
		std::ostream_iterator<typename std::iterator_traits<InputIter>::value_type>(std::cout, ", "));
	std::cout << std::endl;
}


// + + + + + + + + + + + + + + + + + + + + +
// chronometry() & stop_watch
//
class stop_watch
{
	std::chrono::system_clock::time_point start;
	bool log_at_finish;
public:
	stop_watch(bool b = false) : log_at_finish(b) { start = std::chrono::system_clock::now(); }
	~stop_watch() { if (log_at_finish) log(); }

	std::chrono::duration<double> stop()
	{
		std::chrono::system_clock::time_point end = std::chrono::system_clock::now();

		return std::chrono::duration_cast<std::chrono::duration<double>>(end - start);
	}
	void log()
	{
		std::cout << stop().count() << " seconds." << std::endl;;
	}
};


template<typename F, typename ... Types>
decltype(auto) chronometry(F&& f, Types&& ... args)
{
	stop_watch sw(true);
	return std::invoke(std::forward<F>(f), std::forward<Types>(args)...);
}

//-----------------
template<typename T>
class debug_alloc
{
public:
	T* allocate(std::size_t size)
	{
		void* ptr = malloc(sizeof(T) * size);

		printf("[ debug alloc ] allocate, %p, %zd cnt\n", ptr, size);

		return static_cast<T*>(ptr);
	}
	void deallocate(T* ptr, std::size_t size)
	{
		printf("[ debug alloc ] deallocate, %p, %zd cnt\n", ptr, size);

		free(ptr);
	}

	// 위 2개 외에도 아래 3개가 있어야 합니다.
	// 관례적인 코드
	using value_type = T;
	debug_alloc() {}
	template<typename U> debug_alloc(const debug_alloc<U>&) {}
};
// ==, != 되도록 해야 합니다.
template<typename T>
bool operator==(const debug_alloc<T>& a1, const debug_alloc<T>& a2)
{
	return true;
}
template<typename T>
bool operator!=(const debug_alloc<T>& a1, const debug_alloc<T>& a2)
{
	return false;
}
