#include <iostream>
#include <stdio.h>

#include <stdlib.h>

struct Rectangle {

	int lenght;
	int breadth;
	char x;
};
int main() {

	int* p;
	p = (int*) malloc(5 * sizeof(int)); // C

	p = new int[5]; // c++

	return 0;
}