#include "main.hpp"

unsigned int brute_force(unsigned int a, unsigned int b)
{
	unsigned int s;
	unsigned int best;

	s = (a > b) ? b : a;
	best = 1;
	while (s > 0) {
		if (a % s == 0 && b % s == 0) {
			best = s;
			break ;
		}
		s--;
	}
	return s;
}

unsigned int EuclidGCD(unsigned int a , unsigned int b) {
	if (a % b == a)
		return a;
	return EuclidGCD(a % b, b);
}
