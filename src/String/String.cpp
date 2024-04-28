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



	return 0;
}
