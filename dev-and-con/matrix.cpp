#include "matrix.hpp"


int main(){
	T	matrix1, matrix2;
	
	init(matrix1, 4, 3);
	init(matrix2, 4, 3);

	std::cout << "matrix A" << std::endl;
	print(matrix1);
	std::cout << "matrix B" <<std::endl;
	print(matrix2);
	std::cout << std::endl;

	std::cout << "strassen volker algorithm" << std::endl;
	T res1 = matrix_multip_strassen(matrix1, matrix2);
	print(res1);
	std::cout << "devide and conquer" << std::endl;
	T res2 = matrix_multip_devide(matrix1, matrix2);
	print(res2);

	std::cout << std::endl;

	if (compare_matrics(res1, res2) != 1)
		std::cout << "Not equale" << std::endl;
	else
		std::cout << "the same" << std::endl;
}

