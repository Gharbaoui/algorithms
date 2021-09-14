#include "main.hpp"

int main()
{
	int n;
	float	ages[]	= {13.8, 14.9, 1.9, 14.1, 6.4, 2.3, 6.1, 8.9, 1.6, 11.1, 13};
	n = sizeof(ages) / sizeof(ages[0]);


	std::vector<Child> children(ages, ages + n);
	brute_force(children, 1.0);
	print_chs(children);
}

void	random_list()
{
	srand (time(NULL));
	for (int i = 0; i < 10; i++) {
		std::cout << rand() % 14 + 1 << "," << rand() % 12 + 1 << " ";
	}

	std::cout << std::endl;
}

void	print_chs(std::vector<Child> &chs) {
	int n;

	n = chs.size();
	for (int i = 0; i < n; i++)
	{
		chs[i].display_info();
		if (i + 1 != n)
		std::cout << std::endl;
	}
}
