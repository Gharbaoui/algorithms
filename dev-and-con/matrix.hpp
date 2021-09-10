#include <iostream>
#include <vector>
#include <array>


typedef std::vector<std::vector<int > > T;
typedef std::pair<int, int> P;
void	init(T &matrix, int size, int val);


void	print(T matrix);
void	split_matrix(T &matrix, std::vector<T> &tot);
T	matrix_add(T A, T B);
T	matrix_sub(T A, T B);
T	matrix_multip_devide(T A, T B);
void	combined_matrics(T &done, T tl, T tr, T bl, T br);
void	copy_from_smaller(T	&done ,T sma, int pos, int offset);
T	matrix_multip_strassen(T A, T B);
int	compare_matrics(T A, T B);
