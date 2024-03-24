#include <stdio.h>

// Fibonacci series
int F[10];
int rfib(int n) {

	if (n <= 1)
	{
		F[n] = n;
		return n;
	}
	else {
		if (F[n - 2] == -1)
			F[n - 2] = rfib(n - 2);
		if (F[n - 1] == -1)
			F[n - 1] = rfib(n - 1);

		return rfib(n - 2) + rfib(n - 1);
	}
}

// Iteration

int fibI(int n) {
	int t0 = 0, t1 = 1, s = 0;
	if (n <= 1) return n;
	for (int i = 2; i <= n; i++) {
		s = t0 + t1;
		t0 = t1;
		t1 = s;
	}
	return s;
}

using namespace std;


int main() {

	for (int i = 0; i < 10; i++)
		F[i] = -1;
	printf("%d \n", fibI(10));
	printf("%d \n", rfib(10));

	return 0;
}
