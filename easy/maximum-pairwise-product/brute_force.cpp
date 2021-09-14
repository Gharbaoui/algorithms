#include "main.hpp"

void	brute_force(std::vector<int> a, int size) {
	int	low, high;
	int max;
	int product;

	max = -100000;
	low = high = 0;
	for (int i = 1; i < size; i++) {
		high = i;
		for (int j = i - 1; j >= 0; j--) {
			product = a[i] * a[j];
			if (product > max) {
				max = product;
				low = j;
			}
		}
	}

	std::cout << "max is: " << a[low] * a[high] << std::endl;
	std::cout << "value: " << a[low] << " " << a[high] << std::endl;
}

void	other_way(std::vector<int> a, int size)
{
	// lets find  the bigest two numbers
	int max;
	int lastmax;
	int	low;
	int high;

	max = lastmax = -10000;
	for (int i = 0; i < size; i++) {
		if (a[i] >= max) {
			lastmax = max;
			low = high;
			max = a[i];
			high = i;
		}
	}

	std::cout << "max is: " << a[low] * a[high] << std::endl;
	std::cout << "value: " << a[low] << " " << a[high] << std::endl;
}
