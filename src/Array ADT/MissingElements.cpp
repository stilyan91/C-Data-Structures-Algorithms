#include <stdlib.h>
#include <stdio.h>

int main() {
	int arr[11] = { 6, 7, 8, 9, 11, 12, 15, 16, 17, 18, 19 };

	int dif = arr[0] - 0;
	for (int i = 0; i < 11; i++) {
		if (arr[i] - i != dif)
			while (dif < arr[i] - i) {
				printf("%d\n", i + dif); dif++;
			}
	}
	return 0;

	// unordered array
	int main() {
		int A[10] = { 3,7,4,9,12,6,1,11,2,10 };

		int H[13]{ 0 };

		// l = 1;
		// h = 12;
		// n = 10;

		for (int i = 0; i < 10; i++) {
			H[A[i]]++;
		}

		for (int i = 0; i < 11; i++)
		{
			if (H[i] == 0)
				printf("%d\n", i);
		}

		return 0;
	}

}
