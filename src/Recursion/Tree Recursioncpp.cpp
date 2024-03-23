#include <stdio.h>

int fun(int n) {
	if (n > 0)
	{
		printf("%d", n);
		fun(n - 1);
		fun(n - 1);
	}
	return 0;
}

using namespace std;


int main() {
	int x = 5;
	fun(3);
	return 0;
}
