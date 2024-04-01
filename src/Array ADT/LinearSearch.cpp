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

int Delete(struct Array* arr, int index) {
	if (index >= 0 && index < arr->lenght) {
		int x = arr->A[index];
		for (int i = index; i < arr->lenght - 1; i++) {
			arr->A[i] = arr->A[i + 1];
		}
		arr->lenght--;
		return x;
	}
	return 0;
}

int LinearSearch(struct Array arr, int key) {
	for (int i = 0; i < arr.lenght; i++)
	{
		if (arr.A[i] == key)
			return i;
	}
	return -1;
}

void swap(int* x, int* y) {
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

int ILinearSearch(struct Array* arr, int key) {
	for (int i = 0; i < arr->lenght; i++) {
		if (arr->A[i] == key) {
			//swap(&arr->A[i], &arr->A[0); swap with 0
			swap(&arr->A[i], &arr->A[i - 1]); // swap with previous element;
			return i;
		}
	}
	return -1;
}

int BinarySearch(struct Array& arr, int key) {
	int l = 0, h = arr.lenght - 1;
	while (l <= h)
	{
		int mid = (l + h) / 2;
		if (key == arr.A[mid]) {
			return mid;
		}
		else if (key < arr.A[mid])
			h = mid - 1;
		else
			l = mid + 1;
	}
	return -1;
}

int RBinarySearch(int arr[], int l, int h, int key) {
	int mid;
	if (l <= h)
	{
		mid = (l + h) / 2;
		if (key == arr[mid])
			return mid;
		else if (key < arr[mid])
			return RBinarySearch(arr, l, mid - 1, key);
		else
			return RBinarySearch(arr, mid + 1, h, key);
	}
	return -1;
}

int main() {

	struct Array arr = { {2,3,4,5,6},10,5 };

	//printf("%d\n", Delete(&arr, 0));
	// printf("%d\n", BinarySearch(arr, 5));
	printf("%d\n", LinearSearch(arr, 5));
	printf("%d\n", RBinarySearch(arr.A, 0, arr.lenght, 5));
	Display(arr);
	return 0;
}
