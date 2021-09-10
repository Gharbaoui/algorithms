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

T	matrix_sub(T A, T B)
{
	T	C;
	int	n;

	n = A.size();
	init(C, n, 0);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			C[i][j] = A[i][j] - B[i][j];
		}
	}
	return C;
}

void	combined_matrics(T &done, T tl, T tr, T bl, T br)
{
	int n;

	n = tl.size() * 2;
	init(done, n, 0);
	copy_from_smaller(done, tl, 0, n / 2);
	copy_from_smaller(done, tr, 1, n / 2);
	copy_from_smaller(done, bl, 2, n / 2);
	copy_from_smaller(done, br, 3, n / 2);
}

void	copy_from_smaller(T	&done ,T sma, int pos, int offset)
{
	int h;

	h = 0;
	for (int i = 0; i < offset; i++) {
		for (int j = 0; j < offset; j++) {
			if (pos > 1) {h = 1;}
			done[h*offset + i][offset * (pos % 2) + j] = sma[i][j];
		}
	}
}

int	compare_matrics(T A, T B)
{
	int n = A.size();


	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			if (A[i][j] != B[i][j])
				return 0;
	}
	return 1;
}
