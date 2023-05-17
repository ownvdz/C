#include<stdio.h>

int main() {
	char S[2001];
	fgets(S, 2000, stdin);
	printf("%s", S);
	
	return 0;
}
