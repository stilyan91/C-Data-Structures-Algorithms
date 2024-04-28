#include <stdio.h>


int main() {
	// init string
	char name[10] = { 'J','o','h','n','\0' };
	char name1[] = { 'J','o','h','n','\0' };
	char name2[] = "John";
	scanf("%s", name);
	printf("%s", name);
	// gets(name);

	// length of string 
	char S[] = { 'w','e','l','c','o','m','e','\0' }; // char S = "welcome";
	// lenth of a string
	int i;
	for (i = 0; S[i] != '\0'; i++) {

	}
	printf("Length is %d", i);

	// to LowerCase
	char A[] = "WELCOME";

	int i;
	for (i = 0; A[i] != '\0'; i++) {
		A[i] += 32;
	}
	printf("%s", A);
	
	// to changeCase
	char A[] = "welcome";

	int i;
	for (i = 0; A[i] != '\0'; i++) {
		if (A[i] >= 65 && A[i] <= 90)
			A[i] += 32;
		else if (A[i] >= 97 && A[i] <= 122)
			A[i] -= 32;
	}
	printf("%s", A);

	// Counting vowels and consenents
	char A[] = "How are you";
	int i, vcount = 0, ccount = 0;

	for (i = 0; A[i] != '\0'; i++) {
		if ((A[i] == 'a' || A[i] == 'e' || A[i] == 'o' || A[i] == 'u' || A[i] == 'y' || A[i] == 'i')
			|| (A[i] == 'A' || A[i] == 'E' || A[i] == 'O' || A[i] == 'U' || A[i] == 'Y' || A[i] == 'I'))
			vcount++;
		else if ((A[i] >= 65 && A[i] <= 90) || (A[i] >= 97 && A[i] <= 122)) ccount++;
	}
	printf("%d , %d", vcount, ccount);
	

	// Counting words in string

	int valid(char* name) {
		for (int i = 0; name[i] != '\0'; i++) {
			if (!(name[i] >= 65 && name[i] <= 90) &&
				!(name[i] >= 97 && name[i] <= 122) &&
				!(name[i] < 48 && name[i] > 57))
				return 0;
		}
		return 1;
	}

	char A[] = "How are   you";
	int i, words = 1;
	for (i = 0; A[i] != '\0'; i++) {
		if (A[i] == ' ' && A[i - 1] != ' ')
			words++;
	}
	printf("%d", words);
	
	// Validating string
	char name[] = "proba";
	if (valid(name))
		printf("Valid string");
	else
		printf("Invalid string");

	// Reverse a string
	// first method 
	char A[] = "python";
	char B[7];
	int i, j;
	for (i = 0; A[i] != '\0'; i++) {
	}
	i = i - 1;
	for (j = 0; i >= 0; i--, j++) {
		B[j] = A[i];
	}
	B[j] = '\0';

	printf("%s", B);

	// second method
	char A[] = "python";
	int i, j;
	char t;
	for (j = 0; A[j] != '\0'; j++) {}
	j -= 1;

	for (i = 0; i < j; i++, j--) {
		t = A[i];
		A[i] = A[j];
		A[j] = t;
	}

	printf("%s", A);

	// Comparing string 
	char A[] = "Painter";
	char B[] = "Painting";

	int i, j;

	for (i = 0, j = 0; A[i] == '\0' && B[j] == '\0'; i++, j++) {
		if (A[i] != B[j])
			break;
	}
	if (A[i] == B[j])
		printf("equal");
	else if (A[i] < B[j]) printf("smaller");
	else printf("greater");

	// Palindrome
	// first method
	bool isPalindrome(char* A) {
		int i, j;
		for (j = 0; A[j] != '\0'; j++) {}
		j--;
		for (i = 0; i < j; i++, j--) {
			if (A[i] != A[j])
				return false;
		}
		return true;
	}

	char A[] = "madam";
	if (isPalindrome(A))
		printf("the word is palindrome\n");
	else
		printf("Not palindrome\n");
	
	// second method;

	char A[] = "madam";
	char B[6];

	int i, j;
	for (i = 0; A[i] != '\0'; i++) {}
	i--;
	for (j = 0; i >= 0; i--, j++) {
		B[j] = A[i];
	}
	int t = 1;
	for (i = 0, j = 0; A[i] != '\0' && B[j] != '\0'; j++, i++) {
		if (A[i] != B[j])
			t = 0;
	}
	if (t) printf("palindrome"); else printf("not");

	// Finding Duplicates in a string
	// method with HashTable
	char A[] = "finding";
	int H[26]{ 0 }, i;

	for (i = 0; A[i] != '\0'; i++)
	{
		H[A[i] - 97]++;
	}
	for (i = 0; i < 26; i++) {
		if (H[i] > 0) { printf("%c->", i + 97); printf("%d\n", H[i]); }
	}
	// second method prints only duplicates
	char A[] = "finding";
	int i, j;
	for (i = 0; A[i] != '\0'; i++) {
		int count = 1;
		if (A[i] == '0')
			continue;
		for (j = i + 1; A[j] != '\0'; j++) {
			if (A[i] == A[j]) {
				count++;
				A[j] = '0';
			}
		}
		if (count > 1) printf("%c -> %d\n", A[i], count);
	}

	// bitwise method (third method)
	char A[] = "finding";
	long H = 0, x = 0;
	for (int i = 0; A[i] != '\0'; i++) {
		x = 1;
		x = x << (A[i] - 97);
		if ((x & H) > 0) {
			printf("%c is duplicated\n", A[i]);
		}
		else
			H = x | H;
	}
	// Check for Anagram 
	char A[] = "verbose";
	char B[] = "observe";

	int i, H[26]{ 0 };

	for (i = 0; A[i] != '\0'; i++) {
		H[A[i] - 97]++;
	}

	for (i = 0; B[i] != '\0'; i++) {
		H[B[i] - 97]--;
		if (H[B[i] - 97] < 0)
		{
			printf("Not anagram");
			break;
		}
	}
	if (B[i] == '\0')
		printf("It is Anagram");

	// Permutation of string 
	// number of possible permutations are !n (factorial)
	// Recursion -> Backtracking -> Brute force
	// first method
	void perm(char S[], int k) {
		static int A[10] = { 0 };
		static int Res[10];
		int i;
		if (S[k] == '\0')
		{
			Res[k] = '\0';
			for (int j = 0; j != k; j++) {
				printf("%c", Res[j]);
			}
			printf("\n");
		}
		else {
			for (i = 0; S[i] != '\0'; i++) {
				if (A[i] == 0) {
					Res[k] = S[i];
					A[i] = 1;
					perm(S, k + 1);
					A[i] = 0;
				}
			}
		}
	}

	int main() {

		char S[] = "ABC";

		perm(S, 0);

	// second method
		void swap(char* i, char* y) {
			char t;
			t = *i;
			*i = *y;
			*y = t;
		}
		void perm2(char S[], int l, int h) {
			int i;

			if (l == h)
			{
				printf("%s\n", S);
			}
			else {
				for (i = l; i <= h; i++) {

					swap(&S[l], &S[i]);
					perm2(S, l + 1, h);
					swap(&S[l], &S[i]);
				}
			}
		}

		int main() {

			char S[] = "ABC";

			perm2(S, 0, 2);

	return 0;
}
