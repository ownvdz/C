#include<stdio.h>
main(){
	int a, b, b1, b2, b3;
	scanf("%d\n%d", &a, &b);
	b1 = b/100;
	b2 = (b-b1*100)/10;
	b3 = b%10;
	printf("%d\n", a*b3);
	printf("%d\n", a*b2);
	printf("%d\n", a*b1);
	printf("%d", a*b);
}
