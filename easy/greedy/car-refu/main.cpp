#include "main.hpp"

int main(){
	std::vector<int> sts{0, 200, 375, 550, 750, 950};
	T stops;

	rec_way(sts, stops, 400, 0);
	print_vect(stops);
}

void	print_vect(std::vector<int> vect) {
	for (int val : vect) {
		std::cout << val << " ";
	}
	std::cout << std::endl;
}
