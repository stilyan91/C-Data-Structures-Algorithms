#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

// Row-major
// Index (A[i][j] = [i(i-1)/2] + j-1;)

// Column-major 
// Index( A[i][j] = [n + n-1 + n-2 + ... n - (j-2)] +  (i-j) = n(j-1) - (1+2+3 + ... j-2) ] + i-j = [n(j-1) - (j-2)(j-1)]/2] + (i-j)

int main() {

	return 0;
}