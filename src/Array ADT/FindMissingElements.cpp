#include <stdlib>
#include <stdio.h>

int main() {

	int arr[11] = {6, 7, 8, 9, 10, 11, 13, 14, 15, 16};
	int dif = arr[0] - 0;
	for (int i = 0; i < 11; i++) {
		if (arr[i] - i != dif) {
			printf("missing element %d\n" i + diff);
			break;
		}
	}
	return 0;
}