#include "main.hpp"

std::vector<int> brute_force(std::vector<int> &stations, int max, int max_dist)
{
	std::vector<int> stops;
	int	ns;
	int best;
	int	current_station;
	int	car_pos;

	ns = stations.size();
	current_station = 0;
	car_pos = 0;
	while (car_pos + max < max_dist)
	{
		if (car_pos == stations[ns - 1]) {
			if (car_pos + max >= max_dist)
				return stops;
			else
			{
				std::cout << "Not possibale" << std::endl;
				return stops;
			}
		}
		// best stattion for now
		best = -1;
		for (int j = current_station + 1; j < ns; j++) {
			if (stations[j] - car_pos <= max) {
				best = stations[j];
				current_station = j;
			}
			else if (best == -1){
				std::cout << "Not possibale" << std::endl;
				return stops;
			}
			else
				break;
		}
		car_pos = best;
		stops.push_back(best);
	}
	return stops;
}

void	rec_way(T stations, T &stops, int L, int car_index)
{
	int n, new_car_index;
	bool	found;
	n = stations.size();
	if (stations[n - 1] - stations[car_index] <= L) {
		// here if car now can travle from current station to the last one done
		return ;
	}i
	else {
		// find the farthest reachable station and go (move car to that station)
		// and ask the same question how would i go from my position to next good station
		found = false;
		for (int i = car_index + 1; i < n; i++) {
			if (stations[i] - stations[car_index] <= L) {
				new_car_index = i;
				found = true;
			}else if (!found) {
				std::cout << "Not possibale" << std::endl;
				return ;
			}else {
				break ;
			}
		}
		stops.push_back(stations[new_car_index]);
		rec_way(stations, stops, L, new_car_index);
	}
}
