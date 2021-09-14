#include "main.hpp"

int main()
{
	unsigned int a, b, d;

	std::cout << "enter numbers: " ;
	std::cin >> a;
	std::cin >> b;

	d =EuclidGCD(a, b);
	std::cout << "GDC usign euclid method: " << d << std::endl;
	std::cout << "GDC usign brute force: " << brute_force(a, b) << std::endl;
	

	std::cout << (float)a / (float)b << std::endl;
	a = a/d;
	b = b/d;
	std::cout << (float)a / (float)b << std::endl;

}
