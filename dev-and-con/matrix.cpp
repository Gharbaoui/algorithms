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
	T res = matrix_multip_devide(matrix1, matrix2);
	std::cout << "matrix A * B" << std::endl;
	print(res);
}

