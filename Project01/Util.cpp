#include <iostream>
#include <string>
#include <time.h>

using namespace std;

#define length 10

void random_init_matrix(int matrix[length][length], int bount) {
	srand(time(NULL));
	for (int i = 0; i < length; i++) {
		for (int j = 0; j < length; j++) {
			matrix[i][j] = rand() % bount;
		}
	}
}

string convert_matrix_to_string(int matrix[length][length]) {
	string msg = "";

	for (int i = 0; i < length; i++) {
		for (int j = 0; j < length; j++) {
			msg += to_string(matrix[i][j]) + " ";
		}
		msg += "\n";
	}

	return msg;
}
