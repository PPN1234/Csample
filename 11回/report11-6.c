#include <stdio.h>

int min(int x,int y){
    
    if(x>y){
        return y;
    }else if(x<y){
        return x;
    }else{
        printf("二つの値は同値です。\n");
    }

}
    int main(void){
        int num1,num2,sum;

        printf("１番目の整数を入力してください。\n");
        scanf("%d",&num1);

        printf("２番目の整数を入力してください。\n");
        scanf("%d",&num2);

        sum = min(num1,num2);
        if(num1!=num2){
        printf("最小値は%dです。\n",sum);
        }
        return 0;

    }
