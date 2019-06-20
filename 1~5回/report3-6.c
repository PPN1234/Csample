#include <stdio.h>
//練習5のソースコード
int main(void)
{
    double height,weight;

    printf("身長を入力してください。\n");
    scanf("%lf",&height);
    printf("体重を入力してください。\n");
    scanf("%lf",&weight);
    printf("身長は%lfセンチ:体重は%lfキロです。\n",height,weight);

    return 0;

}