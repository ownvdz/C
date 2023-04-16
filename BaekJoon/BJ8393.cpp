#include<stdio.h>
main(){
	int n, result=0;
	scanf("%d", &n);
	for(int i=1; i<=n; i++) {
		result = result+i;
	}
	printf("%d", result);
}
