#include <stdio.h>
//練習4のソースコード

int main(void)
{
    double height;
    double weight;

    printf("身長を入力してください。\n");
    scanf("%lf",&height);
    printf("体重を入力してください。\n");
    scanf("%lf",&weight);
    printf("身長は%lfセンチです。\n",height);
    printf("体重は%lfキロです。\n",weight);

    return 0;

}