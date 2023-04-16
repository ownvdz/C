#include<stdio.h>
main(){	
    int A, B, result[0], i=0;
	while(1){
		scanf("%d %d", &A, &B);
		if(A!=0 || B!=0) {
			int result[i];
			result[i++] = A+B;
			printf("\n %d", result[i]);
		} else {
			i=i-1;
			break;
		}
	}
	for(int j=0; j<i; j++){
		printf("%d\n", result[j]);
	}
	
	
}
