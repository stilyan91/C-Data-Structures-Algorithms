#include <stdio.h>

int fact(int n) {
	if (n == 0)
		return 1;
	return fact(n - 1) * n;
}
using namespace std;


int main() {

	int r = fact(5);
	printf("%d ", r);


	return 0;
}