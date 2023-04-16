#include<stdio.h>
main(){
	int a, b, c, prize;
	scanf("%d %d %d", &a, &b, &c);
	if(a==b && b==c) {
		prize = 10000 + 1000*a;
	} else if(a==b) {
		prize = 1000 + 100*a;
	} else if(b==c) {
		prize = 1000 + 100*b;
	} else if(a==c) {
		prize = 1000 + 100*a;
	} else if(a>b && a>c) {
		prize = 100*a;
	} else if(b>a && b>c) {
		prize = 100*b;
	} else {
		prize = 100*c;
	}
	printf("%d", prize);
}
