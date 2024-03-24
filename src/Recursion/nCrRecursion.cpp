#include <stdio.h>

// Combination formula
// nCr = n!/ r!(n-r)!

int fac(int n) {
	if (n == 0)return 1;
	return fac(n - 1) * n;

}


// Simple function

int C(int n, int r) {
	int num, dem;
	num = fac(n);
	dem = fac(r) * fac(n - r);

	return num / dem;
}

// Recursive function using Pascal Triangle

int rC(int n, int r) {
	if (r == 0 || n == r)
		return 1;
	else
		return rC(n - 1, r - 1) + rC(n - 1, r);
}

using namespace std;


int main() {

	printf("%d \n", rC(4, 2));

	return 0;
}
