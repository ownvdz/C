#include<stdio.h>
main(){
	int hour, min;
	scanf("%d %d", &hour, &min);
	if(hour>=0 && min>=45) {
		min = min-45;
	} else if(hour==0 && min<45) {
		hour = 23;
		min = min+15;
	} else if(hour>0 && min<45) {
		hour = hour-1;
		min = min+15;
	}
	printf("%d %d", hour, min);
}
