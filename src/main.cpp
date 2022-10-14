#include <iostream>
#include <functional>

#include "function.hpp"

int sum(int a, int b)
{
	return a + b;
}

struct foo
{
	int m;
	int k[100];

	foo(int v = 0) : m(v) {}

	void print(int a, int b)
	{
		std::cout << a + m << " " << b + m << std::endl;
		//return 0;
	}
	void operator()(int a, int b)
	{
		std::cout << a + b << std::endl;
	}
};

void print(int a, int b)
{
	std::cout << a << " " << b << std::endl;
}

int main()
{
	fnw::function<int(int, int)> fn([](int a, int b) {return a + b; });

	fnw::function<void()> fn_null(nullptr);

	std::cout << fn(4, 5) << std::endl;

	return 0;
}