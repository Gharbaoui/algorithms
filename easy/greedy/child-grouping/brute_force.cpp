#include "main.hpp"

void	brute_force(std::vector<Child> &chs, int max_diff)
{
	int	id_g;
	int n;

	n = chs.size();
	id_g = 0;
	int k;
	for (int i = 0; i < n; i++)
	{
		for (k = i; k < n; k++) {
			if (!chs[k]) {
				chs[k].setGroup(true);
				chs[k].setGroupId(id_g);
				break;
			}
		}
		if (k == n - 1)
			break ;
		for (int j = k; j < n; j++) {
			if (!chs[j]) {
				if (abs_num(chs[k] - chs[j]) <= max_diff){
					chs[j].setGroup(true);
					chs[j].setGroupId(id_g);
				}
			}
		}
		id_g++;
	}
}

float abs_num(float c)
{
	if (c < 0)
		return -c;
	return c;
}
