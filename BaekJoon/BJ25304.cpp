#include<stdio.h>
main(){
	int A, B, X, N, sum=0;
	scanf("%d\n%d", &X, &N);
	for(int i=0; i<N; i++) {
		scanf("%d %d", &A, &B);
		sum = sum+A*B;
	}
	if(X == sum) {
		printf("Yes");
	} else {
		printf("No");
	}
}
