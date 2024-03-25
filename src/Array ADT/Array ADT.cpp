#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct Array {

	int* A;
	int size;
	int lenght;
};

void Display(struct Array arr) {
	printf("\nElements are\n");
	for (int i = 0; i < arr.lenght; i++) {
		printf("%d ", arr.A[i]);
	}
}
int main() {

	struct Array arr;
	int n;
	printf("Enter size of an array ");
	scanf("%d", &arr.size);

	arr.A = (int*)malloc(arr.size * sizeof(int));
	arr.lenght = 0;

	printf("How many numbers");
	scanf("%d", &n);

	printf("Enter all elements");
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr.A[i]);
	}
	arr.lenght = n;

	Display(arr);

	return 0;
}
