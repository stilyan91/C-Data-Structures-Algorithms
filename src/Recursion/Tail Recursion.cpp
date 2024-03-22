#include <stdio.h>

int fun(int n) {
	if (n > 0)
	{
		printf("%d", n);
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

// recursion where there is nothing after calling itself.Nothing will be performed on returning time.