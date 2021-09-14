#include "main.hpp"

int	brute_force(int n) {
	if (n <= 1)
		return n;
	return brute_force(n - 1) + brute_force(n - 2);
}

unsigned int	other_way(int n)
{
	int a[n + 1];

	a[0] = 0;
	a[1] = 1;

	for (int i = 2; i <= n; i++) {
		a[i] = a[i - 1] + a[i - 2];
	}

	return a[n];
}
