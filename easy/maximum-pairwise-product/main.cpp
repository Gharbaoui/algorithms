#include "main.hpp"

int main()
{
	std::vector <int> a{10, 2, -5, 3, 4, 8, 0, 10};
	brute_force(a, a.size());
	other_way(a, a.size());
}
