#include <iostream>
#include <string>

using namespace std;

#define length 10          // !!!!!


void random_init_matrix(int matrix[length][length], int bount);
string convert_matrix_to_string(int matrix[length][length]);


int main() {

	int matrix[length][length];

	random_init_matrix(matrix, 10);

	string msg = convert_matrix_to_string(matrix);

	cout << msg << endl;

	return 0;
}
