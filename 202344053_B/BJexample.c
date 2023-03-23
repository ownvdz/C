#include<stdio.h>

int main(void) {

    int a, b, num1, num2, num3;
    scanf("%d\n%d", &a, &b);

    num1 = b/100;
    num2 = b/10%10;
    num3 = b%10;

    printf("%d\n", a*num3);
    printf("%d\n", a*num2);
    printf("%d\n", a*num1);

    //printf("%d\n", a*num3+a*num2*10+a*num1*100);

}