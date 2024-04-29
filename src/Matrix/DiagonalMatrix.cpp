#include <stdio.h>
#include <stdlib.h>

using namespace std;

// C code for Diagonal Matrix
struct Matrix {
	int A[10]{ 0 };
	int n;
};

void Set(struct Matrix* m, int i, int j, int x) {
	if (i == j) {
		m->A[i - 1] = x;
	}
}

int Get(struct Matrix m, int i, int j)
{
	if (i == j) return m.A[i - 1];
	else return 0;
};

void Display(struct Matrix m) {
	int i, j;
	for (i = 0; i < m.n; i++) {
		for (j = 0; j < m.n; j++) {
			if (i == j)
			{
				printf("%d ", m.A[i]);
			}
			else printf("0 ");
		}
		printf("\n");
	}
}


int main() {

	struct Matrix m;
	m.n = 4;
	Set(&m, 1, 1, 5); Set(&m, 2, 2, 8); Set(&m, 3, 3, 9); Set(&m, 4, 4, 12);
	printf("%d \n", Get(m, 2, 2));
	Display(m);
	return 0;
}

// C++ class for Diagonal Matrix
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

class Diagonal {
private:
	int n;
	int* A;
public:
	Diagonal() { n = 2; A = new int[2] {0}; }
	Diagonal(int n) :n(n) { A = new int[n] {0}; }
	void set(int r, int c, int x) { if (r == c) A[r - 1] = x; }
	int get(int i, int j) const { if (i = j) return A[i - 1]; else return 0; }
	void Display() const {
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++) {
				if (i == j) cout << A[i] << ' ';
				else cout << "0 ";
			}
			cout << endl;
		}
	};
	~Diagonal() {
		delete[] A;
	}
};

int main() {

	Diagonal d(4);
	d.set(1, 1, 5); d.set(2, 2, 8); d.set(3, 3, 9); d.set(4, 4, 12);
	d.Display();
	return 0;
}
