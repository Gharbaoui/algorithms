#include "matrix.hpp"


void	init(T &matrix, int size, int val)
{
	for (int i = 0; i < size; i++) {
		std::vector<int> tmp;
		for (int j = 0; j < size; j++) {
			val = std::rand() % 40;
			tmp.push_back(val);
		}
		matrix.push_back(tmp);
	}
}

void	print(T matrix)
{
	int n;

	n = matrix.size();

	for (int i = 0; i < n; i++) {
		std::cout << "[ ";
		for (int j = 0; j < n; j++) {
			std::cout << matrix[i][j];
			if (j + 1 != n)
				std::cout << ", ";
		}
		std::cout << " ]" << std::endl;
	}
}

T	matrix_add(T A, T B)
{
	T	C;
	int	n;

	n = A.size();
	init(C, n, 0);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			C[i][j] = A[i][j] + B[i][j];
		}
	}
	return C;
}
