#include<stdio.h>
main(){
	int A, B, T;
	scanf("%d", &T);
	int result[T];
	for(int i=0; i<T; i++) {
		scanf("%d %d", &A, &B);
		result[i] = A+B;
	}
	for(int i=0; i<T; i++) {
		printf("%d\n", result[i]);
	}
}
