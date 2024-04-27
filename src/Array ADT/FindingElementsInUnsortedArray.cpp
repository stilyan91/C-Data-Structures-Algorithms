#include <stdio.h>
#incluide <stdlib.h>

int main() {
	// first method
	int A[10] = { 8,3,6,4,6,5,8,2,7 };
	int n = 10;
	for (int i = 0; i < n - 1; i++) {
		int count = 1;
		if (A[i] != -1)
		{
			for (int j = i + 1; j < n; j++) {
				if (A[i] == A[j]) {
					count++;
					A[j] = -1;
				}
			}
			if (count > 1) printf("%d -> %d\n", A[i], count);
		}
	}

	// second method using hashtable
	int A[10] = { 8,3,6,4,6,5,8,2,7 };
	int n = 10;
	int H[9] = { 0 };

	for (int i = 0; i < n; i++) {
		H[A[i]]++;
	}

	for (int i = 0; i < 9; i++) {
		if (H[i] > 1) {
			printf("%d -> %d\n", i, H[i]);
		}
	}


	return 0;
