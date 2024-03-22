#include <stdio.h>

int fun(int n) {
	if (n > 0)
	{
		fun(n - 1);
		printf("%d", n);
	}
	return 0;
}

using namespace std;


int main() {
	int x = 5;
	fun(3);
	return 0;
}

// The first statement in the recursive function is recursive call. There is nothing before the recursive call.
// Everything is done in returning time.