#include "main.hpp"

int main()
{
	int cap;
	std::vector<Item> items(5);
	init_items(items);

	cap = 7;
	brute_force(items, cap);
}



void	init_items(std::vector<Item> &items)
{
	items[0].setW_and_V(3, 2);
	items[1].setW_and_V(2, 3);
	items[2].setW_and_V(1, 2);
	items[3].setW_and_V(3, 4);
	items[4].setW_and_V(4, 5);
}
