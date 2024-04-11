#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct Array {

	int A[20];
	int size;
	int lenght;
};

void Display(struct Array arr) {
	printf("Elements are\n");
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

int Get(struct Array arr, size_t index) {
	if (index >= 0 && index < arr.lenght)
		return arr.A[index];
	return -1;
}

void Set(struct Array* arr, int index, int x) {
	if (index >= 0 && index < arr->lenght) {
		arr->A[index] = x;
	}
}

int Max(struct Array* arr) {

	int max = arr->A[0];
	for (int i = 1; i < arr->lenght; i++) {
		if (arr->A[i] > max)
			max = arr->A[i];
	}
	return max;
}

int Min(struct Array* arr) {

	int min = arr->A[0];
	for (int i = 1; i < arr->lenght; i++) {
		if (arr->A[i] < min)
			min = arr->A[i];
	}
	return min;
}
int Sum(struct Array* arr) {

	int sum = 0;
	for (int i = 0; i < arr->lenght; i++)
		sum = sum + arr->A[i];
	return sum;
}

float Average(struct Array arr) {
	return (float)Sum(&arr) / arr.lenght;
}

void Reverse(struct Array* arr) {
	int* B;
	int i, j;

	B = (int*)malloc(arr->lenght * sizeof(int));

	for (i = arr->lenght - 1, j = 0; i >= 0; i--, j++) {
		B[j] = arr->A[i];
	}

	for (i = 0; i < arr->lenght; i++)
	{
		arr->A[i] = B[i];
	}
}

void Reverse2(struct Array* arr) {
	for (int i = 0, j = arr->lenght - 1; i < j; i++, j--) {
		swap(&arr->A[i], &arr->A[j]);
	}
}

void leftRotate(struct Array* arr) {
	int temp = arr->A[0];
	for (int i = 1; i < arr->lenght - 1; i++) {
		arr->A[i - 1] = arr->A[i];
	}
	arr->A[arr->lenght - 1] = temp;
}


void InsertSort(struct Array* arr, int x) {
	int i = arr->lenght - 1;
	if (arr->lenght == arr->size)
		return;

	while (i >= 0 && arr->A[i] > x) {
		arr->A[i + 1] = arr->A[i];
		i--;
	}

	arr->A[i + 1] = x;
	arr->lenght++;
}

int isSorted(struct Array arr) {

	int i;
	for (i = 0; i < arr.lenght - 1; i++) {
		if (arr.A[i] > arr.A[i + 1])
			return 0;
	}

	return 1;
}

void Rearrange(struct Array* arr) {
	int i, j;
	i = 0;
	j = arr->lenght - 1;
	while (i < j) {
		while (arr->A[i] < 0) i++;
		while (arr->A[j] >= 0) j--;
		if (i < j) swap(&arr->A[i], &arr->A[j]);
	}
}

int main() {

	struct Array arr = { {2,-3,25,10,-15, -7},10,5 };
	// struct Array A = { {8,3,9,15,6,10,7,2,12,4},10,10 };


	// InsertSort(&arr, 1);
	Rearrange(&arr);

	Display(arr);



	return 0;
}
