#include <stdio.h>

int main(void)
{
    int res,res2;

    printf("２つの整数を入力してください。\n");

    scanf("%d",&res);

    scanf("%d",&res2);
    if(res  == res2){
        printf("２つの値は同じ値です。\n");
    }
    else if(res > res2){ 
        printf("%dより%dのほうが大きい値です。\n",res2,res);
    }
    else if(res2 > res){ 
        printf("%dより%dのほうが大きい値です。\n",res,res2);
    }
    return 0;
}