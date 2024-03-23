#include <stdio.h>

// Taylor series C^x;

double e(int x, int n) {
	static double p = 1, f = 1;
	double r;
	if (n == 0)
		return 1;

	r = e(x, n - 1);
	p = p * x;
	f = f * n;
	return r + p / f;

}

using namespace std;


int main() {

	printf("%lf \n", e(1, 10));


	return 0;
}
