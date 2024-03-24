#include <stdio.h>

// Taylor series C^x using Horner's Rule;
// iteration
double e(int x, int n) {
	int s = 1;
	for (; n > 0; n--) {
		s = 1 + x / n;
	}
	return s;
}

//Recursive
double e(int x, int n) {
	static double s;
	if (n == 0)
		return s;
	s = 1 + x * s / n;

	e(x, n - 1);
	return s;
}


using namespace std;


int main() {

	printf("%lf \n", e(1, 10));


	return 0;
}
