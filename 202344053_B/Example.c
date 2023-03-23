#include<stdio.h>

int main(void){

    int x,y, rest;

    printf("물건 값을 입력하시오: ");
    scanf("%d", &x);

    printf("투입한 금액을 입력하시오: ");
    scanf("%d", &y);
    printf("거스름돈은 다음과 같습니다.\n");
    
    rest = y-x;

    int money_1000 = rest/1000;
    printf("천원권: %d장\n", money_1000);
    rest -= money_1000*1000;
    int money_500 = rest/500;
    printf("오백원 동전: %d개\n", money_500);
    rest -= money_500*500;
    int money_100 = rest/100;
    printf("백원 동전: %d개\n", money_100);

    return 0;
}