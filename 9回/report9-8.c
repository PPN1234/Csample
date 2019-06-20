#include <stdio.h>

int main(void)
{
    int i=0;
    int num;
    double sum;
    printf("正の整数を入力してください。\n");
    scanf("%d",&num);
    sum = num;
    do{
        i++;
        sum=sum/2;
        printf("%d回目の計算結果は%lf\n",i,sum);
    }while(sum >=1);
    printf("%d回繰り返しました。\n",i);
    return 0;
}