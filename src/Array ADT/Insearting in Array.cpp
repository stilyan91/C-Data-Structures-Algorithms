#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct Array {

	int A[20];
	int size;
	int lenght;
};

void Display(struct Array arr) {
	printf("\nElements are\n");
	for (int i = 0; i < arr.lenght; i++) {
		printf("%d ", arr.A[i]);
	}
}

void Append(struct Array* arr, int x) {
	if (arr->lenght < arr->size) {
		arr->A[arr->lenght++] = x;
	}
}

void Insert(struct Array* arr, int index, int x) {
	if (index >= 0 && index <= arr->lenght) {
		for (int i = arr->lenght; i > index; i--) {
			arr->A[i] = arr->A[i - 1];
		}
		arr->A[index] = x;
		arr->lenght++;
	}
}

int main() {

	struct Array arr = { {2,3,4,5,6},10,5 };

	Append(&arr, 10);
	Insert(&arr, 2, 10);
	Display(arr);

	return 0;
}
