#include<stdio.h>
int main(void) {
	int N, v, count=0;
	scanf("%d", &N);
	int num[N];
	for(int i=0; i<N; i++) {
		scanf("%d", &num[i]);
	}
	scanf("%d", &v);
	for(int j=0; j<N; j++) {
		if(num[j] == v) {
			count++;
		}
	}
	printf("%d", count);
	return 0;
}
//2023-04-17
