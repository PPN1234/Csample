#include <stdio.h>

int main(void)
{
int i,num,sum;
double total;

printf("入力する個数を指定して下さい。\n");
scanf("%d",&num);

printf("%d個の点数を入力してください。\n",num);
for(i=1; i<=num; i++){
    scanf("%d",&sum);
    total += sum;
}
    printf("テストの平均点は%lfです。\n",total / num);
    return 0;
}
