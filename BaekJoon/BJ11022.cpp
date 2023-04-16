#include<stdio.h>
main(){
	int A, B, T;
	scanf("%d", &T);
	int Alpha[T], Beta[T], result[T];
	for(int i=0; i<T; i++) {
		scanf("%d %d", &A, &B);
		Alpha[i] = A;
		Beta[i] = B;
		result[i] = A+B;
	}
	for(int i=0; i<T; i++) {
		printf("Case #%d: %d + %d = %d\n", i+1, Alpha[i], Beta[i], result[i]);
	}
}
