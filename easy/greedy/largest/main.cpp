#include "main.hpp"

int main()
{
	std::vector<int> arr{3, 9, 5, 9, 7, 1};

	int num;
	std::cin >> num;
	std::cout << length(num) << std::endl;
	
	largest_comb(arr);
	for (int i : arr)
		std::cout << i ;
	std::cout << std::endl;
}
