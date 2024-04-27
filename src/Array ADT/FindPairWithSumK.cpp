#include <stdio.h>
#include <stdlib.h>

int main() {
	// first method
	int A[10] = { 6,3,8,10,16,7,5,2,9,14 };
	int n = 10;
	// a + b = k;
	for (int i = 0; i < 9; i++) {
		int k = 10;

		for (int j = 0; j < n; j++) {
			if (A[i] + A[j] == k) {
				printf("%d + %d = %d\n", A[i], A[j], k);
			}
		}
	}
	// second method with hashing table

	int main() {
		int A[10] = { 6,3,8,10,16,7,5,2,9,14 };
		int n = 10;
		// a + b = k;
		int H[17] = { 0 };
		int k = 10;

		for (int i = 0; i < n; i++) {
			{
				if (H[k - A[i]] == 0) { printf("%d + %d = %d\n", A[i], k - A[i], k); }
			}
			H[A[i]]++;
		}

		return 0;
	}
	// in sorted Array
	int main() {
		const int n = 10;
		int A[n] = { 1,3,4,5,6,8,9,10,12,14 };
		// a+b = k
		int k = 10;

		int i = 0;
		int j = n - 1;

		while (i < j) {

			if (A[i] + A[j] == k)
			{
				printf("%d + %d = %d\n", A[i], A[j], k);
				i++;
				j--;
			}
			else if (A[i] + A[j] > k)
				j--;
			else
				i++;
		}
		return 0;
}