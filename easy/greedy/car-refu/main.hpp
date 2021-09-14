#include <iostream>
#include <vector>

std::vector<int> brute_force(std::vector<int> &stations, int max, int max_dist);

typedef std::vector<int> T;

void	print_vect(std::vector<int> vect);
void	rec_way(T stations, T &stops, int L, int car_index);
