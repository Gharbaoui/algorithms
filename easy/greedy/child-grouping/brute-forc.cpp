#include "main.h"

void	merg_sort(std::vector<float> &arr, int start, int end)
{
	int	m;
	if (end - start > 0)
	{
		m = start + ((end - start) / 2);
		merg_sort(arr, start, m);
		merg_sort(arr, m + 1, end);
		merg_sorted(arr, start, m, end);
	}
}

void	merg_sorted(std::vector<float> &arr, int start, int m, int end)
{
	int i;
	int j;

	std::vector<float> holder;
	i = start;
	j = m + 1;
	while (1){
		if (i <= m && j <= end) {
			if (arr[i] < arr[j])
			{
				holder.push_back(arr[i]);
				i++;
			} else{
				holder.push_back(arr[j]);
				j++;
			}
		} else
			break ;
	}

	while (i <= m) {
		holder.push_back(arr[i]);
		i++;
	}
	while (j <= end) {
		holder.push_back(arr[j]);
		j++;
	}
	for (float val : holder)
	{
		arr[start] = val;
		start++;
	}
}

void	brute_forc(std::vector<float> &arr, float max_diff)
{
	int size;
	int k;
	size = arr.size();
	merg_sort(arr, 0, size - 1);

	for (int i = 0; i < size;) {
		std::cout << arr[i] << " ";
		for (int j = i + 1; j < size; j++) {
			if (arr[j] - arr[i] <= max_diff)
			{
				std::cout << arr[j] << " ";
				k = j + 1;
			}else {
				std::cout << std::endl;
				k = j;
				break ;
			}
		}
		i = k;
	}
}
