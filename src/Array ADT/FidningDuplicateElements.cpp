#include <stdio.h>
#include <stdlib.h>

int main() {
	int A[10] = { 3,6,8,8,10,12,15,15,15,20 };

	int n = 10;
	int lastDuplicate = 0;

	for (int i = 0; i < n; i++) {
		if (A[i] == A[i + 1] && A[i] != lastDuplicate)
		{
			printf("%d\n", A[i]);
			lastDuplicate = A[i];
		}
	}

	for (int i = 0; i < n - 1; i++) {
		if (A[i] == A[i + 1]) {
			int j = i + 1;
			while (A[j] == A[i])j++;
			printf("%d is appearing %d times\n", A[i], j - i);
			i = j - 1;
		}
	}
	return 0;
}

}