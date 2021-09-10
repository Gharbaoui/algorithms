#include "matrix.hpp"
/// 11 => 0
//  12 => 1
//  21 => 2
//  22 => 3

T	matrix_multip_strassen(T A, T B)
{
	int size;
	std::vector<T >	A_parts;
	std::vector<T >	B_parts;
	std::vector<T >	M_s;
	T	tl;
	T	tr;
	T	bl;
	T	br;
	T	combinedMtx;
	size = A.size();
	if (size > 1) {
		split_matrix(A, A_parts);
		split_matrix(B, B_parts);
		M_s.push_back(
			matrix_multip_strassen(
				matrix_add(A_parts[0], A_parts[3]), // 11 + 22
				matrix_add(B_parts[0], B_parts[3]) // 11 + 22
			)
		);
		M_s.push_back(
			matrix_multip_strassen(
				matrix_add(A_parts[2], A_parts[3]), // 21 + 22
				B_parts[0] // 11
			)
		);
		M_s.push_back(
			matrix_multip_strassen(
				A_parts[0], // 11
				matrix_sub(B_parts[1], B_parts[3]) // 12 - 22
			)
		);
		M_s.push_back(
			matrix_multip_strassen(
				A_parts[3], // 22
				matrix_sub(B_parts[2], B_parts[0]) // 21 + 11
			)
		);
		M_s.push_back(
			matrix_multip_strassen(
				matrix_add(A_parts[0] , A_parts[1]), // 11 + 12
				B_parts[3] // 22
			)
		);
		M_s.push_back(
			matrix_multip_strassen(
				matrix_sub(A_parts[2] , A_parts[0]), // 21 - 11
				matrix_add(B_parts[0], B_parts[1]) // 11 + 12
			)
		);
		M_s.push_back(
			matrix_multip_strassen(
				matrix_sub(A_parts[1], A_parts[3]), // 12 - 22
				matrix_add(B_parts[2], B_parts[3]) // 21 + 22
			)
		);
		tl = matrix_add(matrix_sub(matrix_add(M_s[0] , M_s[3]) , M_s[4]) , M_s[6]);
		tr = matrix_add(M_s[2] , M_s[4]);
		bl = matrix_add(M_s[1] , M_s[3]);
		br = matrix_add(matrix_add(matrix_sub(M_s[0] , M_s[1]) ,  M_s[2]) , M_s[5]);
		combined_matrics(combinedMtx, tl, tr, bl, br);
		return combinedMtx;
	}else {
		init(combinedMtx, 1, 0);
		combinedMtx[0][0] = A[0][0] * B[0][0];
		return combinedMtx;
	}
}
