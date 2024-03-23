#include <stdio.h>

int fun(int n);

int fun(int n) {
	if (n > 100)
	{
		return n - 10;
	}
	else
		return fun(fun(n + 11));
}


using namespace std;


int main() {

	printf("%d ", fun(95));

	return 0;
}
