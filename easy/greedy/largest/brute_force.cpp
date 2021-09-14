#include "main.hpp"

void largest_comb(std::vector<int> &a)
{
	int max;
	int tmp;
	int maxPos;
	int n = a.size();

	for (int i = 0; i < n; i++) {
		max = a[i];
		maxPos = i;
		for (int j = i; j < n; j++) {
			if (a[j] > max) {
				maxPos = j;
				max = a[j];
			}
		}
		tmp = a[i];
		a[i] = max;
		a[maxPos] = tmp;
	}
}

int length(int n) {
	int nb;
	int c;
	int base;

	base = 10;
	nb = n;
	c = 0;

	do {
		nb /= base;
		c++;
	} while (nb != 0);
	return c;
}
