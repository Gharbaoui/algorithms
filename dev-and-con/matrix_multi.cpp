#include "matrix.hpp"


void	split_matrix(T &matrix, std::vector<T> &tot)
{
	int n = matrix.size() / 2;
	int h = 0;

	for (int i = 0; i < 4; i++) {
		T a;
		init(a, n, 0);
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < n; k++) {
				if (i > 1) {h = 1;}
				a[j][k] = matrix[h*n + j][n*(i % 2) + k];
			}
		}
		tot.push_back(a);
	}
}

T	matrix_multip_devide(T A, T B)
{
	int size;
	std::vector<T> A_parts;
	std::vector<T> B_parts;
	T	tl;
	T	tr;
	T	bl;
	T	br;
	T	combinedMtx;
	size = A.size();
	if (size > 1) {
		split_matrix(A, A_parts);
		split_matrix(B, B_parts);
		tl = matrix_add(
			matrix_multip_devide(A_parts[0], B_parts[0]),
			matrix_multip_devide(A_parts[1], B_parts[2])
		);
		tr = matrix_add(
			matrix_multip_devide(A_parts[0], B_parts[1]),
			matrix_multip_devide(A_parts[1], B_parts[3])
		);
		bl = matrix_add(
			matrix_multip_devide(A_parts[2], B_parts[0]),
			matrix_multip_devide(A_parts[3], B_parts[2])
		);
		br = matrix_add(
			matrix_multip_devide(A_parts[2], B_parts[1]),
			matrix_multip_devide(A_parts[3], B_parts[3])
		);
		combined_matrics(combinedMtx, tl, tr, bl, br);
		return combinedMtx;
	}else {
		init(combinedMtx, 1, 0);
		combinedMtx[0][0] = A[0][0] * B[0][0];
		/*combinedMtx[0][0] = (A[0][0] * B[0][0]) + (A[0][1] * B[1][0]); // used if  i choose to 2*2 as base
		combinedMtx[0][1] = (A[0][0] * B[0][1]) + (A[0][1] * B[1][1]);

		combinedMtx[1][0] = (A[1][0] * B[0][0]) + (A[1][1] * B[1][0]);
		combinedMtx[1][1] = (A[1][0] * B[0][1]) + (A[1][1] * B[1][1]);*/
		return combinedMtx;
	}
}
