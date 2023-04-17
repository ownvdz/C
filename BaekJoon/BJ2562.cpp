#include<stdio.h>
int main(void) {
	int num[9];
	for(int i=0; i<9; i++) {
		scanf("%d", &num[i]);
	}
	int Max=num[0], count=1;
	for(int j=1; j<9; j++) {
		if(num[j] > Max) {
			Max = num[j];
			count = j+1;
		}
	}
	printf("%d \n%d", Max, count);
	return 0;
}
