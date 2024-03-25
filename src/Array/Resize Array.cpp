#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;


int main() {

	int* p = new int[5] {2, 4, 6, 8, 10};

	int* q = new int[10];

	for (int i = 0; i < 5; i++) {
		q[i] = p[i];
	}

	delete[]p;
	p = q;
	q = NULL;

	for (int i = 0; i < 5; i++) {
		printf("%d ", p[i]);
	}

	return 0;
}
