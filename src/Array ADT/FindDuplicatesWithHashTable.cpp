#include <stdlib.h>
#include <cstdio>

int main() {
	int A[10] = { 3,6,8,8,10,12,15,15,15,20 };

	int H[21] = { 0 };


	for (int i = 0; i < 10; i++) {
		H[A[i]]++;
	}

	for (int i = 0; i < 20; i++) {
		if (H[i] > 1)
			printf("%d is occured => %d times\n", i, H[i]);
	}
	return 0;
}