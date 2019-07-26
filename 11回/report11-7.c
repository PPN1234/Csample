#include <stdio.h>

int power(int x,int y){
    return pow(x,y);
}
int main(void){
    int num1,num2,sum;

    printf("１番目の整数を入力してください。（１〜５）\n");
    scanf("%d",&num1);
    printf("２番目の整数を入力してください。(１〜５）\n");
    scanf("%d",&num2);
    sum=power(num1,num2);
    printf("%dの%d乗は%dです。\n",num1,num2,sum);

    return 0;
}