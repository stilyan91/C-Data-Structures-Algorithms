#include <stdio.h>
#include <stdlib.h>

int main() {
	const int n = 10;
	int A[n] = { 5,8,3,9,6,2,10,-1,4 };

	int min = A[0];
	int max = A[0];

	for (int i = 1; i < n; i++) {
		if (A[i] < min)
			min = A[i];
		else if (A[i] > max)
			max = A[i];
	}

	printf("min = %d\nmax = %d\n", min, max);

	return 0;
}
