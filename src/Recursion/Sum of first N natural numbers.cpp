#include <stdio.h>

int sumF(int n) {
	return n * (n + 1) / 2;
}

// O(1) -- constant;

int sum(int n) {
	int s = 0;
	for (int i = 0; i < n; i++) {
		s += i;
	}
	return s;
}
// O(n);

int sum(int n) {
	if (n == 0)
	{
		return  0;
	}
	else
		return sum(n - 1) + n;
}
// Time - O(n)  space O(n);

using namespace std;


int main() {

	printf("%d ", sum(10));

	return 0;
}
