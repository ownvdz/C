#include<stdio.h>
int main(void) {
	int N;
	scanf("%d", &N);
	int num[N];
	for(int i=0; i<N; i++) {
		scanf("%d", &num[i]);
	}
	int Max=num[0], Min=num[0];
	for(int j=1; j<N; j++) {
		if(num[j] < Min) {
			Min = num[j];
		}
		if(num[j] > Max) {
			Max = num[j];
		}
	}
	printf("%d %d", Min, Max);
	return 0;
}
