#define _CRT_SECURE_NO_WARINGS
#include<stdio.h>

int main(void)
{   
    int x,y;

    printf("첫번째 숫자를 입력하세요 : ");
    scanf("%d", &x);
    printf("두번째 숫자를 입력하세요 : ");
    scanf("%d", &y);
    printf("두수의 합 : %d", x+y);
}