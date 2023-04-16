#include<stdio.h>
main(){
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int x = a+b, y = a%c, z = b%c;
	int w = y+z;
	printf("%d\n", x%c);
	printf("%d\n", w%c);
	printf("%d\n", a*b%c);
	printf("%d", y*z%c);
}
