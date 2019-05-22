#include <stdio.h>

int main(void)
{
    int total;
    double num1,num2,num3,num4,num5,num6,ave;
    num6 = 5;
    printf("科目1の点数を入力してください。\n");
    scanf("%lf",&num1);
    printf("科目2の点数を入力してください。\n");
    scanf("%lf",&num2);
    printf("科目3の点数を入力してください。\n");
    scanf("%lf",&num3);
    printf("科目4の点数を入力してください。\n");
    scanf("%lf",&num4);
    printf("科目5の点数を入力してください。\n");
    scanf("%lf",&num5);
    total = num1+num2+num3+num4+num5;
    printf("5科目の合計点は%d点です。\n",total);
    ave = total/num6;
    printf("5科目の平均点は%lf点です。\n",ave);

    return 0;
}