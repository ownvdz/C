#include<stdio.h>

void pyramid(int X) {
	for(int i=0; i<X; i++) {
		printf("\n");
		for(int j=0; j<X-i; j++) {
			printf(" ");
		}
		for(int j=0; j<i; j++) {
			printf("*");
		}
		printf("*");
		for(int j=0; j<i; j++) {
			printf("*");
		}
	}
}

int main(void) {
	
	int num;
	printf("몇 줄의 피라미드를 출력할지 입력하시오 : ");
	scanf("%d", &num);
	pyramid(num);
}
//2023-04-16
