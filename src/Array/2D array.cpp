#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;


int main() {

	int A[3][4] = { {1,2,3,4},{2,4,6,8},{3,5,7,9} };

	int* B[3];

	for (int i = 0; i < 3; i++)
		B[i] = new int[4];
	// B[i] = (int*)malloc(4*sizeof(int));

	A[1][2] = 15;

	int** C = new int* [3];
	// int **C = (int**)malloc(sizeof(int*));
	// C[0] = (int*)malloc(4 * sizeof(int));
	// C[1] = (int*)malloc(4 * sizeof(int));
	// C[2] = (int*)malloc(4 * sizeof(int));

	C[0] = new int[4];
	C[1] = new int[4];
	C[2] = new int[4];


	return 0;
}
