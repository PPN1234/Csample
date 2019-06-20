#include <stdio.h>

int main(void)
{
    double num1,num2,num3;

    printf("三角形の高さを入力してください。\n");
    scanf("%lf",&num1);
    printf("三角形の底辺を入力してください。\n");
    scanf("%lf",&num2);
    num3 = (num1 * num2) /2;
    printf("三角形の面積は%fです。\n",num3);
    return 0;
    }