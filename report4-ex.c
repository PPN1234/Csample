#include <stdio.h>

int main(void)
{
    double a,b;
    printf("少数を2つ入力してください。\n");
    scanf("%lf", &a);
    scanf("%lf", &b);
    printf("長方形の面積は%fです。\n", a*b);

    return 0;
}