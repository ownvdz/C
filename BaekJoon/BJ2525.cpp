#include<stdio.h>
main(){
	int hour, min, time;
	scanf("%d %d\n%d", &hour, &min, &time);
	int Nhour = time/60, Nmin = time%60;
	if(min+Nmin>=60) {
		hour = hour+1;
		min = min+Nmin-60;
	} else {
		min = min+Nmin;
	}
	if(hour+Nhour>=24) {
		hour = hour+Nhour-24;
	} else {
		hour = hour+Nhour;
	}
	printf("%d %d", hour, min);
}
