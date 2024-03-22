#include <stdio.h>

// int x = 0; global variable ! if we use static or global this is same think.
int fun(int n) {
	static int x = 0;
	if (n > 0)
	{
		x++;
		return fun(n - 1) + x;
	}
	return 0;
}

using namespace std;


int main() {
	int x = 5;
	printf("%d", fun(x));
	return 0;
}